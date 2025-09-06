// Make a funtion which calculates 'a'
// raised to power 'b' using recursion.

//using for loop
#include <stdio.h>

int power(int a, int b){
    int x = 1;
    for(int i = 1; i <= b; i++){
        x =x * a;
    }

    return x;
}

int main() {
    int a;
    printf("Enter base: ");
    scanf("%d", &a);
    int b;
    printf("Enter exponent: ");
    scanf("%d", &b);

    int p = power(a,b);
    printf("%d raised to power  %d is %d",a,b ,p);

    return 0;
}
