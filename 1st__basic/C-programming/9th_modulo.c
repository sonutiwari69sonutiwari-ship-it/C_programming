#include<stdio.h>
int main() {
    int a = 4; // a>b (imp if a<b then a%b always give a)
    int b = 2;
    int r = a % b;
    printf("%d", r);
    return 0;
}