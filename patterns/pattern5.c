#include <stdio.h>

int main(void)
{
    int i, j;
    int n = 5;

    for(i = 0; i < n; i++)
    {
        for(j = n; j >= 1; j--)
        {
            printf("%d ", j);
        }
    printf("\n");
    }
}