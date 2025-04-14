#include <stdio.h>

double sthElse(double x, int y) {
    if (y == 0)
        return 1;
    else if (y > 0)
        return x * sthElse(x, y - 1);
    else
        return 1 / sthElse(x, -y);
}

int main() {
    double x;
    int y;
    start: ;
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    if (y < 0 && x == 0){
        printf("Infinity number\n");
        goto start;
    }
    if (y==0 && x==0){
        printf("Indeterminate case\n");
        goto start;
    }

    double result = sthElse(x, y);
    printf("%.2f^%d = %.3f\n", x, y, result);
    return 0;
}