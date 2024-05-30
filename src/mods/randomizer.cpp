#include "randomizer.h"
#include "utils/patch.h"
#include "mkb/mkb.h"
#include "systems/pref.h"

namespace randomizer {

static patch::Tramp<decltype(&mkb::load_stage)> s_load_stage_tramp;

static u32 stage_0_to_31 = 0;
static u32 stage_32_to_63 = 0;
static u32 stage_64_to_95 = 0;
static u8 stage_96_to_99 = 0;

static int curr_stage = 0;

int get_complete(int stage_num) {
    if (stage_num < 32) {
        return (stage_0_to_31 >> stage_num) & 1;
    } else if (stage_num < 64) {
        return (stage_32_to_63 >> (stage_num - 32)) & 1;
    } else if (stage_num < 96) {
        return (stage_64_to_95 >> (stage_num - 64)) & 1;
    } else if (stage_num < 100) {
        return (stage_96_to_99 >> (stage_num - 96)) & 1;
    }
    return 1;
}

// worlds and stages are 0 to 9
// int stage_num = (world * 10) + stage;
void set_complete(int stage_num) {
    if (stage_num < 32) {
        stage_0_to_31 |= (1 << (stage_num));
    } else if (stage_num < 64) {
        stage_32_to_63 |= (1 << (stage_num - 32));
    } else if (stage_num < 96) {
        stage_64_to_95 |= (1 << (stage_num - 64));
    } else if (stage_num < 100) {
        stage_96_to_99 |= (1 << (stage_num - 96));
    }
}

void clear_complete() {
    stage_0_to_31 = 0;
    stage_32_to_63 = 0;
    stage_64_to_95 = 0;
    stage_96_to_99 = 0;
}

int get_remaining() {
    int total_uncompleted = 0;
    for (int i = 0; i < 100; i++) {
        if (!get_complete(i)) {
            total_uncompleted++;
        }
    }
    return total_uncompleted;
}

int pick_stage() {
    u32 num = mkb::rand() % get_remaining();
    u32 total_uncompleted = 0;
    for (int i = 0; i < 100; i++) {
        if (get_complete(i)) {
            continue;
        }
        // i is uncomplete
        if (total_uncompleted == num) {
            return i;
        }

        total_uncompleted++;
    }
    return -1;
}

void init() {
    patch::hook_function(s_load_stage_tramp, mkb::load_stage, [](int stage_id) {
        if (mkb::main_mode == mkb::MD_GAME && mkb::main_game_mode == mkb::STORY_MODE && mkb::sub_mode != mkb::SMD_GAME_SCENARIO_MAIN && pref::get(pref::BoolPref::StageOrderRandomizer)) {
            s_load_stage_tramp.dest(mkb::get_story_mode_stage_id(curr_stage / 10, curr_stage % 10));
        } else {
            s_load_stage_tramp.dest(stage_id);
        }
    });
}

void tick() {
    if (pref::did_change(pref::BoolPref::StageOrderRandomizer) || mkb::sub_mode == mkb::SMD_GAME_SCENARIO_INIT) {
        clear_complete();
        curr_stage = mkb::rand() % 100;
    }
    if (mkb::main_mode != mkb::MD_GAME || mkb::main_game_mode != mkb::STORY_MODE) {
        return;
    }
    // set stage timer on ready
    if (mkb::sub_mode == mkb::SMD_GAME_READY_INIT) {
        mkb::mode_info.stage_time_limit = mkb::get_storymode_stage_time_limit(curr_stage / 10, curr_stage % 10);
        mkb::mode_info.stage_time_frames_remaining = mkb::get_storymode_stage_time_limit(curr_stage / 10, curr_stage % 10);
    }
    // mark goal as complete
    if (mkb::sub_mode == mkb::SMD_GAME_GOAL_INIT) {
        set_complete(curr_stage);
        if (get_remaining() < 1) {
            clear_complete();
        }
        curr_stage = pick_stage();
    }
}

}  // namespace randomizer