#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // spaces print karna (mirror ke liye ulta)
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // stars print karna
        for (int k = 1; k <= n; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
