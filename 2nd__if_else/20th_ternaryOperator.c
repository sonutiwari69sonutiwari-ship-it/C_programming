#include<stdio.h>
    int main(){
        int n;
        printf("Enter a number : ");
    scanf("%d", &n); // Dabba me value daal diya
    // TERNARY OPERATOR
    // exp1 ? exp2 : exp3
    n%2==0 ?  printf("Even number") : printf("Odd Number");
    // if(n%2==0){
    //       printf("Even number");
    // }
    // else{
    //     printf("Odd Number");
    // }
        return 0;
    }