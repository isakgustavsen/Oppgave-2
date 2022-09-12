#include "drawline.h"

void b_draw_line(SDL_Surface *surface, int x1, int y1, int x2, int y2, unsigned int color) {
    int b = y1;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int i;

    for(i = 0; y1 <= y2; y1++, i++) {
        int x = x1 + dx * i / dy;
        printf("x: %d, y: %d\n", x, y1);
        set_pixel(surface, y1, x, color);

        }
}
