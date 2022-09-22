#include "./headers/fractal.h"
#include <stdio.h>


double abs(double n) {
    if (n < 0.0)
        return n * -1;
    return n;
}


int z_calc(complex *number) {
    int i = 0; 
    double z = 0.0;
    while (abs(z) <= 2 && i < MAX) {
        z = z * z + number->real + number->imaginary; 
        i++;
    }
    return i;
}


int main(int argc, char *argv[]) {
    complex n;

for (int row = 0; row < HEIGHT; row += 1) 
    for (int col = 0; col < WIDTH; col += 1) {
        n.real = (col ) / WIDTH;
        n.imaginary = (row ) / WIDTH;
        printf("(%.2f %.2fi) %d\n", n.real, n.imaginary, z_calc(&n));

    }
}