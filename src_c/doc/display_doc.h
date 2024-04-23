/* Auto generated file: with makeref.py .  Docs go in docs/reST/ref/ . */
#define DOC_DISPLAY "pygame module to control the display window and screen"
#define DOC_DISPLAY_INIT "init() -> None\nInitialize the display module"
#define DOC_DISPLAY_QUIT "quit() -> None\nUninitialize the display module"
#define DOC_DISPLAY_GETINIT "get_init() -> bool\nReturns True if the display module has been initialized"
#define DOC_DISPLAY_SETMODE "set_mode(size=(0, 0), flags=0, depth=0, display=0, vsync=0) -> Surface\nInitialize a window or screen for display"
#define DOC_DISPLAY_GETSURFACE "get_surface() -> Surface\nGet a reference to the currently set display surface"
#define DOC_DISPLAY_FLIP "flip() -> None\nUpdate the full display Surface to the screen"
#define DOC_DISPLAY_UPDATE "update(rectangle=None, /) -> None\nupdate(rectangle_list, /) -> None\nUpdate all, or a portion, of the display. For non-OpenGL displays."
#define DOC_DISPLAY_GETDRIVER "get_driver() -> name\nGet the name of the pygame display backend"
#define DOC_DISPLAY_INFO "Info() -> VideoInfo\nCreate a video display information object"
#define DOC_DISPLAY_GETWMINFO "get_wm_info() -> dict\nGet information about the current windowing system"
#define DOC_DISPLAY_GETDESKTOPSIZES "get_desktop_sizes() -> list\nGet sizes of active desktops"
#define DOC_DISPLAY_LISTMODES "list_modes(depth=0, flags=pygame.FULLSCREEN, display=0) -> list\nGet list of available fullscreen modes"
#define DOC_DISPLAY_MODEOK "mode_ok(size, flags=0, depth=0, display=0) -> depth\nPick the best color depth for a display mode"
#define DOC_DISPLAY_GLGETATTRIBUTE "gl_get_attribute(flag, /) -> value\nGet the value for an OpenGL flag for the current display"
#define DOC_DISPLAY_GLSETATTRIBUTE "gl_set_attribute(flag, value, /) -> None\nRequest an OpenGL display attribute for the display mode"
#define DOC_DISPLAY_GETACTIVE "get_active() -> bool\nReturns True when the display is active on the screen"
#define DOC_DISPLAY_ICONIFY "iconify() -> bool\nIconify the display surface"
#define DOC_DISPLAY_TOGGLEFULLSCREEN "toggle_fullscreen() -> int\nSwitch between fullscreen and windowed displays"
#define DOC_DISPLAY_SETGAMMA "set_gamma(red, green=None, blue=None, /) -> bool\nChange the hardware gamma ramps"
#define DOC_DISPLAY_SETGAMMARAMP "set_gamma_ramp(red, green, blue, /) -> bool\nChange the hardware gamma ramps with a custom lookup"
#define DOC_DISPLAY_SETICON "set_icon(surface, /) -> None\nChange the system image for the display window"
#define DOC_DISPLAY_SETCAPTION "set_caption(title, icontitle=None, /) -> None\nSet the current window caption"
#define DOC_DISPLAY_GETCAPTION "get_caption() -> (title, icontitle)\nGet the current window caption"
#define DOC_DISPLAY_SETPALETTE "set_palette(palette=None, /) -> None\nSet the display color palette for indexed displays"
#define DOC_DISPLAY_GETNUMDISPLAYS "get_num_displays() -> int\nReturn the number of displays"
#define DOC_DISPLAY_GETWINDOWSIZE "get_window_size() -> tuple\nReturn the size of the window or screen"
#define DOC_DISPLAY_GETWINDOWPOS "get_window_pos() -> tuple\nReturn the position of the window or screen"
#define DOC_DISPLAY_SETWINDOWPOS "set_window_pos((x, y)) -> None\nSet the current window position"
#define DOC_DISPLAY_GETALLOWSCREENSAVER "get_allow_screensaver() -> bool\nReturn whether the screensaver is allowed to run."
#define DOC_DISPLAY_SETALLOWSCREENSAVER "set_allow_screensaver(bool) -> None\nSet whether the screensaver may run"
#define DOC_DISPLAY_ISFULLSCREEN "is_fullscreen() -> bool\nReturns True if the pygame window created by pygame.display.set_mode() is in full-screen mode"
#define DOC_DISPLAY_ISVSYNC "is_vsync() -> bool\nReturns True if vertical synchronisation for pygame.display.flip() and pygame.display.update() is enabled"
#define DOC_DISPLAY_GETCURRENTREFRESHRATE "get_current_refresh_rate() -> int\nReturns the screen refresh rate or 0 if unknown"
#define DOC_DISPLAY_GETDESKTOPREFRESHRATES "get_desktop_refresh_rates() -> list\nReturns the screen refresh rates for all displays (in windowed mode)."
#define DOC_DISPLAY_MESSAGEBOX "message_box(title, message=None, message_type='info', parent_window=None, buttons=('OK',), return_button=0, escape_button=None) -> int\nCreate a native GUI message box"
