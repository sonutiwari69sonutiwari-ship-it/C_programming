// using return type or factorial type
#include <stdio.h>

int sum(int n) {
    // base case
    if (n == 0 || n == 1)  
        return n;

    // recursive case
    int recAns = n + sum(n - 1);
    return recAns;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = sum(n);
    printf("sum = %d\n", fact);

    return 0;
}
