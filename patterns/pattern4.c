#include <stdio.h>

int main(void)
{
    int i, j;
    int n = 5;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%c ", j+65);
        }
    printf("\n");
    }

    return 0;
}