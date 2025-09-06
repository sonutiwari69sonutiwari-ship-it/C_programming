#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter a 1st number");  // alt + shift +F for aling in one line
    scanf("%d", &a);
    printf("Enter a 2nd number");
    scanf("%d", &b);
    printf("Enter a 3rd number");
    scanf("%d", &c);
    if(a>b && a>c){
         printf("%d is greater", a);
    }
    if(b>a && b>c){
         printf("%d is greater", b);
    }
    if(c>a && c>b){
         printf("%d is greater", c);
    }
    return 0;
}