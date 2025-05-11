#include<stdio.h>

int main(){
    int num, rem, n, new_num=0, arm;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while (n!=0)
    {
        /* code */
        rem = n%10;
        new_num += rem*rem*rem;
        n/=10;
    }
    if(new_num==num){
        printf("%d is an armstrong number!", num);
    }
    else{
        printf("%d is not an armstrong number!", num);
    }
    printf("\n");
    return 0;
}