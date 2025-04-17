#include <stdio.h>

    // %[flags][width][.precision]specifier

int main(void)
{
    float f = 90.1234;
        // - (left aligned), 10 (spaces), .2 (2 decimals)
    printf("|||%-10.2f|||\n", f);
        // (right aligned), 10 (spaces), .3 (3 decimals)
    printf("|||%10.3f|||\n", f);

    return 0;
}
