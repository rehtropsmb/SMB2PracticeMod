# Version History
## v1.1.0
* Savestates
  * Feature: an optional bind to clear a savestate
  * Feature: a setting to prevent overwriting a savestate (they must manually be cleared)
  * Bugfix: Added jamabar support for savestates
* Custom Timer Types
  * Added two new modes: Freeze at 0.00 and Count Up from 0.00
* Physics Editor
  * Added 6 new physics presets and a customizable physics editor
  * Moon Gravity was renamed to Light Ball (to match Heavy Ball)
  * A toggleable text display will appear on screen when custom physics are being used
* Jump-Mod
  * Complete revamp in a new "Standard" jump profile
    * Jumping on a sloped surface or a wall will slightly push you away from that surface, allowing for massive speed boosts while traveling downhill, but increased difficulty when jumping uphill
    * Jump count can be increased from one to two, and there's even an infinite jumpcount option!
    * Walljumps can be disabled completely
    * Jump-Mod has always changed physics slightly to make jumping more comfortable, but these physics changes can now be disabled to play Jump-Mod with vanilla physics
  * Moved old Jump-Mod to "Classic" jump profile (so you can still play with the old version if you like the cheese)
* Camera
  * Added options to use SMB2 or SMB1 camera in any pack. These options will "force" the camera and disable camera-toggles in any pack that has them
* Disable Fallouts
  * Added options for a disabled fallout plane, and for a bouncy fallout plane
  * Added options to disable fallout volumes
* Timers
  * Framesave Calculation, Subtick Timer, and Unrounded Timers
* Customization
  * Added RGB selector, rainbow mode, and random mode to ball color options
  * Added random mode to clothing color options
  * Added option to change monkey selection
* IL Battle / IL Session Tracker
  * Endless timer now shows hour count
  * Ready button is now a controller bind that can be changed
  * Time/Score displays can now be disabled individually
  * There's now a Minimal version of the Score Breakdown display
  * Added a tie counter
  * Added an attempt counter
  * Buzzer beaters now make the relevant time/score text rainbow
  * Buzzer beater score attempts now have post-goal support
  * Added a toggle for the "Epic Buzzer Beater B)" text
  * Pausing on the goal-tape break frame (or the next frame) will no longer incorrectly invalidate an attempt
* IL Validation Mark
  * Pausing on the goal-tape break frame (or the next frame) will no longer incorrectly invalidate an attempt
  * Added a button to disable all IL-Invalidating mods
  * All new game-modifying mods will invalidate the mark
* Menus
  * Options that aren't currently relevant are hidden
  * Reorganized almost every menu