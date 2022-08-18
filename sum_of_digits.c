#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
 * prints sum of digits of a five-digit number
 */

int main() {
	
    int n, sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(int r; n != 0; n = n/10)
    {
        r = n%10;
        
        sum = sum + r;
        
    }
    printf("%d\n", sum);
    
    return 0;
}
