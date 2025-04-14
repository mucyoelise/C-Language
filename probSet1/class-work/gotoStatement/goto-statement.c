#include <stdio.h>

int main () {
    int i, num, product, sum=0;
    for(i = 1, product = 1; i <= 4; ++i) {
        printf("Enter num %d: ", i);
        scanf("%d", &num);
        if (num == 0)
            continue; 
            product *= num;  
            goto skip;
             
        skip:sum+=num; // Label to jump to, empty statement follows it
    }
    printf("product = %d\n", product);
    printf("Sum = %d\n", sum);
    return 0;
}