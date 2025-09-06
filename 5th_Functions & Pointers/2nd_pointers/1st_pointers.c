#include <stdio.h>

int main() {
    int a = 5;
    int* x = &a; //int* address ko store karne ke liye 
     //p se address dikhta hain
    printf("%p\n",*x);
    return 0;
}
// code is right but output is not showing here
