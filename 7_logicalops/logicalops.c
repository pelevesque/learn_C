#include <stdio.h>

int main(void)
{
    int price = 10;

        // logical and &&
    if (price > 2 && price < 20)
    {
        printf("price is between 2 and 20\n");
    }
        // logical or ||
    if (price > 50 || price < 20)
    {
        printf("price is higher than 50 or lower than 20\n");
    }
        // logical not !
    if (! (price == 20))
    {
        printf("price is not 20\n");
    }

    return 0;
}
