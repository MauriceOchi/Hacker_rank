#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
   
    return 0;
}

 int max_of_four(int a, int b, int c, int d) 
{
    int num[] = {a, b, c, d};
    int max = 0;
    
    for(int i = 0; i < 4; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
