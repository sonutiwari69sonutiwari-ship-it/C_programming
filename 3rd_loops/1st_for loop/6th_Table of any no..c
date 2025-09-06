#include <stdio.h>

int main() {
    int n;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print table of n
    printf("Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
