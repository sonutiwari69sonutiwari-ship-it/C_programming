#include<stdio.h>
int main() {
    int x;
    printf("enter fisrt number\n");
    scanf("%d", &x); //user will give value of x
    int y;
    printf("enter second number\n");
    scanf("%d", &y); // user will give value of y
    int sum = x + y;
    printf("Sum of the number is : %d", sum);
    return 0;
}