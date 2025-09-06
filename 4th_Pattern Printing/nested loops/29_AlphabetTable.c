#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of lines: ");
    scanf("%d", &rows);

    int n = rows + 3; // total letters count

    for (int i = 0; i < rows; i++) {
        // Left side letters
        for (int j = 0; j < rows - i; j++) {
            printf("%c ", 'A' + j);
        }

        // Middle spaces
        if (i > 0) {
            for (int k = 0; k < 2 * i - 1; k++) {
                printf("  "); // double space for alignment
            }
        }

        // Right side letters
        if (i != 0) {
            for (int j = n - (rows - i); j < n; j++) {
                printf("%c ", 'A' + j);
            }
        }

        printf("\n");
    }

    return 0;
}
