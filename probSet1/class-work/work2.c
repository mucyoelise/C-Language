#include<stdio.h>
int main(){
    int num1,num2;
    char operand;
    printf("Enter first nbr: ");
    scanf("%d", &num1);
    printf("Enter any operand(+,-,%%,/,*): ");
    scanf(" %c", &operand);
    printf("Enter second nbr: ");
    scanf("%d", &num2);

    switch (operand)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1+num2);
        break;
    
    case '-' :
        printf("%d - %d = %d\n", num1, num2, num1-num2);
        break;
    
    case '*' :
        printf("%d * %d = %d\n", num1, num2, num1*num2);
        break;
        
    case '/' :
        printf("%d / %d = %d\n", num1, num2, num1/num2);
        break;
    
    case '%' :
        printf("%d mod %d = %d\n", num1, num2, num1%num2);
        break;
    
    default:
        printf("Entered operand is not supported: %c\n", operand);
        break;
    }
}