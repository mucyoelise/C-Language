#include <stdio.h>

// Recursive function to calculate factorial
int fact(int n) {
    // Base cases: 0! = 1, 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive call is applied here
        return n * fact(n - 1);
    }
}

int main() {
    int nbr, factorial;

    next: ; // Label for retrying input

    printf("Enter a number to find its factorial: ");
    scanf("%d", &nbr);

    if (nbr < 0) {
        // Factorial not defined for negative numbers
        printf("Can't find factorial of a negative number, please try again!\n");
        goto next; // Go back to ask again
    }

    factorial = fact(nbr); // Function call
    printf("The factorial of the number (%d!) is: %d\n", nbr, factorial);

    return 0;
}