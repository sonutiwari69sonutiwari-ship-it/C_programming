#include <stdio.h>

int main() {
    int n;

    // user से rows input लेना
    printf("Enter number of lines: ");
    scanf("%d", &n);

    // outer loop -> rows
    for (int i = 1; i <= n; i++) {

        // 1) spaces print करना
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // 2) numbers print करना
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }

        printf("\n"); // next line
    }

    return 0;
}
