#include <stdio.h>

double compute(int n) {
    if (n == 0)
        return 1;
    else if (n > 0)
        return 2 * compute(n - 1);
    else
        return 1.0 / compute(-n);
}

int main() {
    int n;
    printf("Enter the value of n in this case (2^n): ");
    scanf("%d", &n);

    double result = compute(n);
    printf("2 pow %d = %.2lf\n", n, result);

    return 0;
}
