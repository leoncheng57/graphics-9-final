#ifndef DISPLAY_H
#define DISPLAY_H

void plot( screen s, color c, int x, int y, double z, double **zb);
void clear_screen( screen s);
void save_ppm( screen s, char *file);
void save_extension( screen s, char *file);
void display( screen s);

color change_color( int i );
#endif
