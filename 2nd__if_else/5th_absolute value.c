#include<stdio.h>
int main (){
    int n; // dabba ban gya
printf("Enter a number : ");
    scanf("%d", &n); // Dabba me value daal diya
    if(n<0){ // if n is negative
        n = n * (-1);
        }
        printf("The absolute vale is : %d", n);
    
    return 0;
}