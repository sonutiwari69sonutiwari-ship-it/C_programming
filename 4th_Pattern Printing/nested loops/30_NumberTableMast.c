#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of lines: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Left side numbers
        for (int j = 1; j <= rows - i; j++) {
            printf("%d", j);
        }

        // Middle spaces
        for (int k = 0; k < 2 * i - 1; k++) {
            printf(" ");
        }

        // Right side numbers
        for (int j = rows - i; j >= 1; j--) {
            if (i == 0 && j == rows - i) continue; // 1st row me double center avoid
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
