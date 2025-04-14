#include<stdio.h>

int main (){
    double princ, rate;
    int years;

    printf("Enter initial investment: ");
    scanf("%lf", &princ);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    for(int i=1; i<=years; i++){
        princ+=princ*(rate/100);
        printf("Year %d: %.2f\n", i, princ);
    }
    return 0;
}