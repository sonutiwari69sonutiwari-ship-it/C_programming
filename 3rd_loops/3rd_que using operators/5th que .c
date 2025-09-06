//WAP to print the sum of given number and its reverse   
#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // number ko store kar liya

    // reverse nikalna
    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Sum of %d and %d is %d\n", original, reverse, original + reverse);

    return 0;
}
