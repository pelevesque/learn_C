#include <stdio.h>

int main(void)
{
    FILE *file = NULL;
    unsigned char buffer[1024];
    size_t bytesRead = 0;

    file = fopen("bach.musicline", "rb");

    if (file != NULL)
    {
        while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0)
        {
            printf("%s", buffer);
        }
    }

    fclose(file);

    return 0;
}
