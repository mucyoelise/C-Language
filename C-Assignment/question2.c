#include <stdio.h>

int main() {
    int arr[100], n, i, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        // Checking even or odd
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);

    return 0;
}
// This program counts the number of even and odd integers in an array.
