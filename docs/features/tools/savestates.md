# Savestates
Savestates allow you to save the current state of the ball position, ball velocity, and stage objects. This saved gamestate can then be loaded to return to this gamestate at any time. Savestates can be used to practice difficult parts of stages, discover new routes, or aid as an accessibility tool.

## How to Use
#### Menu Location: Tools -> Savestates
When enabled, use the bindings below to use savestates. First, select a slot with the C-stick. Then, create a savestate while in gameplay. Once the state has been created, you can press the load button to load that state.

To frame advance, hold down either L or R. Next, create a savestate with X but continue to hold down either L or R. You will now be in frame advance mode and the game will be frozen as long as you continue to hold L or R. By pressing X, you will now advance one frame at a time.

|Key|Binding|
|-|-|
|X|Create Savestate in current slot|
|Y|Load Savestate from current slot|
|C-Stick|Change current slot|
|L+X|Frame advance|
|R+X|Frame advance|

There are 8 available savestate slots. Although it's extremely unlikely, the game may not have enough memory to create a savestate when several of the slots are filled with states on stages with many stage objects or animations. (An example of a stage that can cause this issue is E15 Kirigami from the custom pack Level Jams Season 6. This stage has more than 200 bananas).

If you have created savestates in several slots, you are able to preview the position of each slot. Hold down L or R, move the C-Stick to a slot, and the game will preview that slot. You can move the C-Stick around the wheel while to view each slot quickly.

## Configuration
### Clear Savestate
Create an optional keybind. When this bind is pressed, it will clear the savestate current slot.

### Prevent Overriding
When enabled, savestates cannot be created in a slot that already contains a savestate. The slot must manually be cleared by using the **Clear Savestate** feature before another savestate can be created in that slot.
