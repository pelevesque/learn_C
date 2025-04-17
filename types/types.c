#include <stdio.h>

int main(void)
{
        // -5, 0, 20, 512
    int position = 10;
    int x, y, z;
    x = 2;
    y = 3;
    z = 4;

        // -2.5, 98.2, 150.234
    float myfloat   = 98.123477777777;

        // Double (more precision than a float)
    double mydouble = 98.123477777777;

        // Can also be an int referring to the ASCII number.
    char mychar = 'Y';

    printf("position: %d\n", position);
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    printf("num: %f\n", myfloat);
    printf("mydouble: %lf\n", mydouble);
    printf("char: %c\n", mychar);

    return 0;
}

