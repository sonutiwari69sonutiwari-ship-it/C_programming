//WAP TO PRINT REVERSE OF A GIVEN NUMBER   
#include<stdio.h>
    int main(){
        int n;
        printf("Enter a number ");
        scanf("%d",&n);
        int r = 0; // r = reverse
        while(n>0){
             r = r*10;
            r = r + (n%10);
            n = n/10;
        }
        printf("The reversed number is %d",r);
        return 0;
    }