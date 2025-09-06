#include <stdio.h>

int factorial(int n) {
    // base case
    if (n == 0 || n == 1)  
        return 1;

    // recursive case
    int recAns = n * factorial(n - 1);
    return recAns;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("Factorial = %d\n", fact);

    return 0;
}
