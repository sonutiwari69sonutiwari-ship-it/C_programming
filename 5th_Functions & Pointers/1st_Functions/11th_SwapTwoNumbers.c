//We are using third variable
#include <stdio.h>

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    int b;
    printf("Enter b: ");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d", b);
    return 0;
}
