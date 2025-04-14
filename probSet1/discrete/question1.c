#include<stdio.h>
int fact(int n);

int main (){
    int nbr, factorial;
    next: ;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &nbr);
    if (nbr < 0){
        printf("Can't find factorial of a negative number, please try again!\n");
        goto next;
    }
    factorial = fact(nbr);
    printf("The factorial of the number(%d!): %d\n", nbr, factorial);
    return 0;
}

int fact(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    if (n>1){
        return n * fact(n-1);
    }
}