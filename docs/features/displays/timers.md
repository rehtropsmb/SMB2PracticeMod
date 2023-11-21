# Timers
These displays allow different timers to be used to track various different values. They're mainly useful to speedrunners looking to optimize their skills in Story Mode, Challenge Mode, and Individual Level (IL) speedruns.

## How to Use
#### Menu Location: Displays -> Timers

### Realtime Timers
**Realtime Timers** are useful for Story Mode and Challenge Mode speedrunners that are practicing pause strats. These timers will display constantly.
|Realtime Timers|Description|
|-|-|
|Realtime Timer (RTA)|This timer acts like the stage's timer, but it remains running while the game is paused.|
|Pausetime Timer (PAU)|This timer starts at zero and counts upwards while the game is paused.|

### Subtick Timers
**Subtick Timers** are useful for Individual Level (IL) speedrunners that are trying to improve a time by a single frame. These timers will display on goal-entry.
|Subtick Timers|Description|
|-|-|
|Framesave (FSV)|While not necessarily a timer, this calculates how close you were to being one frame faster. If you get a high percentage, it means you were almost one frame faster. Likewise, a low percentage means you were almost one frame slower.|
|Subtick Timer (SUB)|The subtick timer uses your **Framesave** to interpolate a time between game ticks. It accurately calculates your goal entry time between the current frame and the previous frame.|
|Unrounded Timers (CUR/NXT)|These timers show the range of subticks between the current frame and the next higher frame. These exist to clear confusion with the subtick timer. For example, a subtick time of `52.962` will display on the in-game timer as a `52.95` instead of a `52.96`. This is because any subtick time in the range of `52.950` to (but not counting) `52.966` will count as a `52.95`.|

### Segment Timers
**Segment Timers** are useful for Story Mode and Challenge speedrunners that are using the **Speedrun Segment** practice tool to improve at a specific segment. These timers will only display while playing a **Speedrun Segment**.
|Segment Timers|Description|
|-|-|
|IW Segments (IW)|This tracks your time taken while playing an Individual World Segment|
|CM Segments (SEG)|This tracks your time while playing a Challenge Mode Segment|
