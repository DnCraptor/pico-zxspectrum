#pragma once

#define ZX_SPECTRUM_SCREEN_WIDTH 256
#define ZX_SPECTRUM_SCREEN_HEIGHT 240
#ifndef DISPLAY_WIDTH_PIXELS
#define DISPLAY_WIDTH_PIXELS 640
#endif
#ifndef DISPLAY_HEIGHT_PIXELS
#define DISPLAY_HEIGHT_PIXELS 480
#endif
// The number of blank lines to add, taking into account line doubling
#define DISPLAY_BLANK_LINES ((DISPLAY_HEIGHT_PIXELS/2) - ZX_SPECTRUM_SCREEN_HEIGHT)
// The number of pixels to display in the border, taking into account pixel doubling
#define DISPLAY_BORDER_PIXELS (DISPLAY_WIDTH_PIXELS/2)
// The number of pixels to display in the left border, taking into account pixel doubling
#define DISPLAY_BORDER_PIXELS_LEFT ((DISPLAY_BORDER_PIXELS - ZX_SPECTRUM_SCREEN_WIDTH) >> 1)
// The number of pixels to display in the left border, taking into account pixel doubling
#define DISPLAY_BORDER_PIXELS_RIGHT (DISPLAY_BORDER_PIXELS - ZX_SPECTRUM_SCREEN_WIDTH - DISPLAY_BORDER_PIXELS_LEFT)

#define DISPLAY_BORDER_PIXELS_LEFT_BLANK (MAX(DISPLAY_BORDER_PIXELS_LEFT, 24) - 24)
#define DISPLAY_BORDER_PIXELS_RIGHT_BLANK (MAX(DISPLAY_BORDER_PIXELS_RIGHT, 24) - 24)
#define DISPLAY_BORDER_PIXELS_LEFT_COLORED (MIN(DISPLAY_BORDER_PIXELS_LEFT, 24))
#define DISPLAY_BORDER_PIXELS_RIGHT_COLORED (MIN(DISPLAY_BORDER_PIXELS_RIGHT, 24))
