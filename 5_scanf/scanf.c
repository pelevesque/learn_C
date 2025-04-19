#include <stdio.h>

int main(void)
{
    char buffer[50];
    printf("Enter a string: ");
    scanf("%s", buffer);
    printf("string entered: %s\n", buffer);

    return 0;
}
