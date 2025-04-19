#include <stdio.h>

int main(void)
{
    int x = 3;

    if (x == 2)
    {
        printf("x is 2\n");
    }
    else if (x == 3)
    {
        printf("x is 3\n");
    }
    else
    {
        printf("x is %d\n", x);
    }

    return 0;
}
