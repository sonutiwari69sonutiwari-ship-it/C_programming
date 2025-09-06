// "A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number."
#include <stdio.h>

// Function to print prime factors
void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);

    // Factor out 2s
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    // Factor out odd numbers
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is still a prime > 2
    if (n > 2) {
        printf("%d", n);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    primeFactors(num);

    return 0;
}
