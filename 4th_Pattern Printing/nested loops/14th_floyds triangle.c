#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int a = 1;  // starting number
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", a);
            a++;   // increment number
        }
        printf("\n");
    }

    return 0;
}
