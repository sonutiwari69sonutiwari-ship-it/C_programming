#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // Odd line → numbers
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
        } else {
            // Even line → alphabets
            for (int j = 0; j < i; j++) {
                printf("%c", 'A' + j);
            }
        }
        printf("\n");
    }

    return 0;
}
