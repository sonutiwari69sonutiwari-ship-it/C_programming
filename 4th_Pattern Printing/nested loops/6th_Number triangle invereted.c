#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {      // outer loop (rows)
        for (j = 1; j <= i; j++) {  // inner loop (numbers)
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
