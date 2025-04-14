#include <stdio.h>

int Function(int n) {
    if (n == 0)
        return 1;
    if (n > 0)
        return Function(n - 1) + 2;
}

int main() {
    float input;
    int n;
    char pref;
    
    printf("We have F(10) set as default, to get the answer type 'y' otherwise you'll customize the number: ");
    scanf("%c", &pref);
    if (pref == 'y'){
        printf("Function(10) = %d\n",Function(10));
        goto end;
    }
    if (pref == 'n'){
        goto next;  
    }

    next: printf("Now you are going to customize the number to be computed in Function(num)\n");

    printf("Enter a number: ");
    scanf("%f", &input);

    if ((int)input != input || input<0) {
        printf("Error: Function(n) is only defined for positive integers.\n");
        goto next;
    }

    n = (int)input; // Now safe to cast

    int result = Function(n);
    printf("Function(%d) = %d\n", n, result);
    end:;
    return 0;
}
