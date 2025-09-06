#include <stdio.h>

int add(int x, int y) {
    return x + y;// tum yaha par jo sign(+,-,*,/)use kro ge
                 // whi kaam hoga
}

int main() {
    int a;
    printf("Enter 1st number : ");
    scanf("%d", &a);

    int b;
    printf("Enter 2nd number : ");
    scanf("%d", &b);

    int sum = add(a, b);
    printf("%d", sum);

    return 0;
}
