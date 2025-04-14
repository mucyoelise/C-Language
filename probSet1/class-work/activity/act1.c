#include<stdio.h>
int main (){
    char ch;
    printf("Enter a character(P/C/S): ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'P':
        printf("PROGRAMMING\n");
        break;
    case 'C':
        printf("COMPUTERSCIENCE\n");
        break;
    case 'S':
        printf("SoICT\n");
        break;
    default:
        printf("Invalid input. Please enter P, C, or S.\n");
        break;
    }
    return 0;
}