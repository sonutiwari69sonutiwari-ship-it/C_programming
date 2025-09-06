#include <stdio.h>

int main() {
    int n;

    // user se input lena
    printf("Enter number of lines: ");
    scanf("%d", &n);

    // outer loop -> rows
    for (int i = 1; i <= n; i++) {

        // 1) spaces print karna
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // 2) alphabets print karna
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n"); // next line
    }

    return 0;
}
