#include "./fractal.h"


int z_calc(double r, double im, int max) {
    int i = 0; 
    double x = 0, y = 0;
    while (((pow(x,2) + pow(y, 2)) <= 4) && (i < max)) {
        double x_new = pow(x,2) - pow(y, 2) + r; 
        y = 2 * x * y + im; 
        x = x_new; 
        i++;
    } 
    return i;
}


int main(int argc, char *argv[]) {
    int pos_h;
    int pos_w;

    pos_h = 0;
    pos_w = 0; 
    int max = 100;
    while (pos_h < HEIGHT)
    {
        while(pos_w < WIDTH) {
            double c_re = ( pos_h - WIDTH/2.0  ) * 4.0 / WIDTH; 
            double c_im = ( pos_w - HEIGHT/2.0 ) * 4.0 / WIDTH;
            printf("%d\n", z_calc(c_re, c_im, max));
            pos_w++;
        }
        pos_h++;
    }
}