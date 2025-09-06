#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int k = 1; k <=i; k++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
