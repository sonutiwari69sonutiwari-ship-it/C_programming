#include <stdio.h>

void dec_inc(int n, int x){
    if(x > n) return;   // base case

    // Pehle decreasing order
    printf("%d\n", n - x + 1);

    // Recursive call
    dec_inc(n, x + 1);

    // Baad me increasing order
    printf("%d\n", x);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    dec_inc(n, 1);

    return 0;
}
