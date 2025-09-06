#include <stdio.h>

int main() {
    int n; // number of terms
    printf("Enter a number : ");
    scanf("%d", &n);

    // 4 7 10 13 16 19 ... up to n terms
    // Using extra variable for AP series
    int a = 4;

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        a = a + 3; // common difference
    }

    return 0;
}
