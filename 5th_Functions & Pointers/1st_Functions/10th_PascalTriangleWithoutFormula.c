#include <stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // spaces for triangle shape
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        int first = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", first); // spacing maintained
            first = first * (i - j) / (j + 1); // formula for binomial coefficient
        }
        printf("\n");
    }

    return 0;
}
