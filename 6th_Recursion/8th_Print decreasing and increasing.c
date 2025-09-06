#include <stdio.h>

void inc_dec(int n, int x){
    if(x > n) return;   // base case

    // Pehle increasing order
    printf("%d\n",x);

    // Recursive call
    inc_dec(n, x + 1);

    // Baad me decreasing order
    if(x != n)   // n ko do baar print na ho isliye
        printf("%d\n", x);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    inc_dec(n, 1);

    return 0;
}
