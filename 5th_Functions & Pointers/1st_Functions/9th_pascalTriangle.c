#include <stdio.h>

// factorial function
int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

// nCr function
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Pascal triangle function
void pascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // spaces for alignment
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }
        // numbers
        for (int j = 0; j <= i; j++) {
            printf("%4d", nCr(i, j));
        }
        printf("\n");
    }
}

// main function
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    pascalTriangle(n);

    return 0;
}
 