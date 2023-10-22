# :confetti_ball: Super Monkey Ball 2 Practice Mod

A Super Monkey Ball 2 mod for speedrun practice, experimentation, and fun! This mod supports both vanilla SMB2 and most romhacks (Gaiden, SMB651, etc).

![Dual Screenshots](doc/dual-screenshot.png)

# Main Features

* Savestates
* Input Display
* Speedrun Segment Practice
* Speedrun Timers
* Assist Tools (Freeze Timer, Prevent Fallouts)
* Audio Toggles (Disable Music/Timer Ding)
* Fun Variants ([Jump Mod](https://www.youtube.com/watch?v=kWAunK6Av-Q), Reverse Mode, Golden/Dark Banana Modes)
* Debug Mode Toggle

... and more! To see every feature, view the [Full Feature List](doc/feature-list.md)

# Install
First, download the [latest release](https://github.com/ComplexPlane/SMB2PracticeMod/releases/latest). Make sure to download `smb2-practice-mod.zip`. Do not download the `Source Code (zip)` unless you know what you're doing!

To install the Practice Mod on **Wii console**, follow the [Wii Setup Guide](doc/wii-setup-guide.md). For [Dolphin Emulator](https://dolphin-emu.org/), follow the [Dolphin Setup Guide](doc/dolphin-setup-guide.md).

# Usage

Press L+R at the same time on your controller to toggle the in-game menu. Go to the Help menu to see controller bindings for savestates and other features.

View the [Full Feature List](doc/feature-list.md) for specific details on how to use every feature in the mod!

Be sure to look for a hidden easter egg!

# Building

See [Building from Source](doc/building.md).

# Contact

If you have any questions, bugs, or feature requests, feel free to message me on Discord (`complexplane`) or
email (`complexplanegames@gmail.com`). You can also file a GitHub issue.

# Credits

Thank you to:

**Zephiles** for their numerous code contributions. These include:

* The initial [TTYD-Practice-Codes](https://github.com/Zephiles/TTYD-Practice-Codes) framework of which this mod is
  based on
* The current REL loader Gecko code
* A custom heap implementation for the mod
* A revised REL loader which serves as both a Gecko and ISO loader (not yet included)
* A Super Monkey Ball 1 port of the REL loader (not yet included)

**PistonMiner** for their [ttyd-tools](https://github.com/PistonMiner/ttyd-tools) framework, which provides everything you need to turn C++ into a .GCI savefile which can be loaded into a Gamecube game at runtime. In addition, thanks very much for the detailed answers to my romhacking-related questions.

**CraftedCart** for their substantial contributions to the Monkey Ball 2 decompile project, as well as the many large contributions to the Monkey Ball hacking and custom level scene on the whole.

**Yoshimaster96** for labelling hundreds of functions and data in Super Monkey Ball 1, many of which were ported to Super Monkey Ball 2.

**TheBombSquad** for their decompile contributions as well, and for writing the current version of the ISO REL loader.

**Alist** and **PetresInc** for providing insightful feedback on a pre-release alpha needed before publishing an initial beta version of the mod.

**rehtrop** and **Nambo** for suggesting and implementing numerous features of their own!

**The Monkey Ball Speedrunning Scene** for inspiring this mod! Thank you for being so fun to be a part of.
