#include<stdio.h>
    int main(){
        int a,b,c;
    printf("Enter a 1st number");  // alt + shift +F for aling in one line
    scanf("%d", &a);
    printf("Enter a 2nd number");
    scanf("%d", &b);
    printf("Enter a 3rd number");
    scanf("%d", &c);
    if(a>b){//b is out of race
            if(a>c)
                printf("%d is greatest", a);
            else // ye bhi likh sakte hauin yahA....if(c>a)  --> b<a<c
                printf("%d is greatest", c);
    }
    else{// b >a --> a abb sabse bada hain
        if(b>c)
            printf("%d is greatest", b);
        else // c>b
            printf("%d is greatest", c);

    }
    return 0;
        return 0;
    }