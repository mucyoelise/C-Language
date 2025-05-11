#include<stdio.h>

int main(){
    int num1, num2, gcf;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    for (int i=1; i<=num1 || i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcf = i;
        }
    }
    
    printf("Greatest Common Factor: %d\n", gcf);
}