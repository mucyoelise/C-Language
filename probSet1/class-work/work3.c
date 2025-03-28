#include<stdio.h>
int main()
{
	
	float m1, m2, m3, m4, m5;
	printf("Enter marks of all subject:\n");
	scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
	
	float per = (m1 + m2 + m3 + m4 + m5)/5.0;
	float temp;

	
	temp = per/10;
	int temp2 = (int)temp;
	
	switch(temp2)
	{   case 10:
            printf("The best\n");
            break;

		case 9:
			printf("Grade A\n");
			break;
			
		case 8:
			printf("Grade B\n");
			break;
			
		case 7:
			printf("Grade C\n");
			break;
			
		case 6:
			printf("Grade D\n");
			break;
            case 5:
			printf("Grade E\n");
			break;
			
		case 4:
		case 3:
		case 2:
		case 1:
			printf("Grade F\n");
			break;
			
		default:
			printf("Percentage Is Out Of Decision\n");
			
	}
	
	return 0;
	
}