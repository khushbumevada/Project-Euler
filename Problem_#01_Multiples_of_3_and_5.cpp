#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    long a, b, c, sum_3 = 0, sum_5 = 0, sum_15 = 0;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        n -= 1;
        a = n / 3;
        b = n / 5;
        c = n / 15;
        sum_3 = 3 * ((a * (a + 1)) / 2);
        sum_5 = 5 * ((b * (b + 1)) / 2);
        sum_15 = 15 * ((c * (c + 1)) / 2);
       
        printf("%ld\n", sum_3 + sum_5 - sum_15);
    }
    return 0;
}
