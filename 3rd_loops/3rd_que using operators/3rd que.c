#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;         // last digit nikalo
        if (digit % 2 == 0) {   // even check
            sum = sum + digit;  // sum me add karo
        }
        n = n / 10;             // last digit hatao
    }

    printf("Sum of even digits: %d\n", sum);

    return 0;
}
