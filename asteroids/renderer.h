
//renderer.h

#include <stdint.h>
#include <math.h>

//Screen dimension constants
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

//assing a colour to a single pixel
int draw_pixel(uint16_t* pixel_buffer, int x, int y, uint16_t colour);

int draw_line(uint16_t* pixel_buffer, int x1, int y1, int x2, int y2, uint16_t colour);

//assign a colour to all pixels
void clear_pixels(uint16_t* pixel_buffer, uint16_t colour);

