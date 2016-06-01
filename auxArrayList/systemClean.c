#include <stdio.h>
#include <stdlib.h>
void clean_stdin(void)
{
    int c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

void systemPause(void)
{
    printf("Press enter to continue...\n");
    getchar();
}
