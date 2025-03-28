#include<stdio.h>
#include<math.h>
int main(){
    float mark,sum=0.0,perc;
    for(int i=1; i<=5; i++){
        printf("Enter your marks: ");
        scanf("%f", &mark);
        sum = sum + mark;
    }
    perc= (sum/5.0);
    printf("Percentage found from your marks is: %.1f %%\n", perc);

    int gradeRange = perc/10.0;
    gradeRange = round(gradeRange);

    switch(gradeRange)
    {
    case 10:
        printf("Grade A\n");
        break;
    case 9:
        printf("Grade B\n");
        break;
    case 8:
        printf("Grade C\n");
        break;
    case 7:
        printf("Grade D\n");
        break;
    case 6:
        printf("Grade E\n");
        break;
    case 5:
        printf("Grade F\n");
        break;
    case 4:
        printf("Grade F\n");
        break;
    case 3:
        printf("Grade F\n");
        break;
    case 2:
        printf("Grade F\n");
        break;
    case 1:
        printf("Grade F\n");
        break;
    case 0:
        printf("Grade F\n");
        break;
    default:
        printf("The %% is out of decision.\n");
        break;
    }

}