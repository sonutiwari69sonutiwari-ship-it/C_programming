#include<stdio.h>
int main() {
    int a,b; // a>b
    printf("enter Divident");
    scanf("%d", &a);
    printf("enter divisior");
    scanf("%d", &b);
    int q = a/b;
    int r = a - (b*q); // divident = remaindere - divisior * quotient
    printf("the Remainder when %d is divided by %d is : %d", a, b, r);
    return 0;
}