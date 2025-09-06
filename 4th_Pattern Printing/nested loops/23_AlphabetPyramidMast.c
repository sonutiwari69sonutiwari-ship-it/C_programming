#include <stdio.h>

int main() {
    int n, i, j;

    printf("no. of lines: : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // increasing letters
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }

        // decreasing letters
        for (j = i - 1; j >= 1; j--) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}
