#include "drawline.h"

void a_draw_line(SDL_Surface *surface, int x1, int y1, int x2, int y2, unsigned int color) {
    int b = x1;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int i;

    for(i = 0; x1 <= x2; x1++, i++) {
        int y = y1 + dy * i / dx;
        set_pixel(surface, x1, y1, color);
        }
    }
