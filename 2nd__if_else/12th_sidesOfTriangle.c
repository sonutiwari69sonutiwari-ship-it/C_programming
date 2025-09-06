#include <stdio.h>
int main()
{
    int a;
    printf("Enter a 1st side");  // alt + shift +F for aling in one line
    scanf("%d", &a);
    int b;
    printf("Enter a 2nd side");
    scanf("%d", &b);
    int c;
    printf("Enter a 3rd side");
    scanf("%d", &c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
         printf("Valid triangle");
    }
    else{
        printf("Invalidd triangle");
    }
    return 0;
}