#include <stdio.h>

int main() {
    int num, rem, sum, temp;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem; // cube of digit
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
