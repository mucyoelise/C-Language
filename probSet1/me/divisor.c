#include <stdio.h>

int main (void) {
    int n, i, p,counter=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    p = n/2;
    for (i=1; i<=p; i++){
        int r;
        r = n%i;
        if(r==0){
            printf("%d\t", i);
            counter++;
        } 
    }
    printf("%d\n", n);
    printf("%d has %d divisors\n", n, counter+1);

}