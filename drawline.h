#ifndef DRAWLINE_H_
#define DRAWLINE_H_

#include "SDL.h"

// Draw a line on the screen from x1,y1 to x2,y2 with a given pen color
void a_draw_line(SDL_Surface *surface, int x1, int y1, int x2, int y2, unsigned int color);
void b_draw_line(SDL_Surface *surface, int x1, int y1, int x2, int y2, unsigned int color);
void set_pixel(SDL_Surface *surface, int x, int y, unsigned int color);

#endif /*DRAWLINE_H_*/
