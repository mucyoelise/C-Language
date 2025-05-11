#include <stdio.h>

int countDigits(int n) {
    int count = 0;
    if (n == 0) {
        return 1;  // Special case for 0
    }
    if (n < 0) {
        n = -n;   // Handle negative numbers
    }
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int main() {
    int number = 7;
    printf("The number of digits in %d is %d\n", number, countDigits(number));
    return 0;
}
