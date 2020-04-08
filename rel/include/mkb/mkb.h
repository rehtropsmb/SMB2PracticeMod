#pragma once

#include <gc/gc.h>
#include <mkb/dip.h>

#include <cstdint>

namespace mkb {

struct GraphicsInfo { /* Is this the right size for the struct? maybe? -Crafted */
  void *activeFramebuffer; /* A pointer to either framebuffer1 or framebuffer2 */
  void *framebuffer1;
  void *framebuffer2;
  uint32_t frameCount;
  uint32_t activeFramebufferIndex; /* Either 0 or 1, representing framebuffer1 or framebuffer2 */
  gc::GXFifoObj *fifos[2];
};

extern "C" {

extern uint32_t padButtonBitfield;
extern uint32_t padAnalogBitfield;

extern gc::GXColor debugTextBgColor;
extern GraphicsInfo *graphicsInfo;

extern gc::OSHeapHandle mainHeap, stageHeap, bgHeap, charHeap, replayHeap;
extern uint32_t mainHeapSize, stageHeapSize, bgHeapSize, charHeapSize, replayHeapSize;
extern uint32_t gSomethingWithGameHeaps;

void drawDebugText();
void drawDebugTextBg(double x1, double y1, double x2, double y2);
void drawDebugTextCharEn(uint32_t x, uint32_t y, char ch, uint32_t color);

void GXSetZModeIfDifferent(gc::GXBool compare_enable, gc::GXCompare func, gc::GXBool update_enable);
void GXLoadTexObjIfDifferent(gc::GXTexObj* obj, gc::GXTexMapID id);

void eventActivateSound();
void eventTickSound();
void eventDeactivateSound();

void createGameHeaps(int param1);


}

}