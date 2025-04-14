#include<stdio.h>

int main(){
    int nth;
    float avg,sum=0.0,num;

    printf("Maximum no. of inputs: ");
    scanf("%d", &nth);
    for (int i=1; i<=nth; i++){
        printf("Please enter num %d: ", i);
        scanf("%f", &num);
        if (num<0){
            goto skip;
        }
        else{
            sum+=num;
        }
        skip:;
    }
    avg = sum/nth;

    printf("Average of numbers: %.2f\n", avg);
}