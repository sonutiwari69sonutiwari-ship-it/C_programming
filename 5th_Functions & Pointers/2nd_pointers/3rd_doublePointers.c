#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;

    int** y = &x; // int** ye int* ka address store karta hai


    printf("%p\n", * x);
     printf("%p\n", y);
    return 0;
}