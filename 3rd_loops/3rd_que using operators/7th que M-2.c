// Print the sum of the series:
// 1 - 2 + 3 - 4.......upto n.
  
#include<stdio.h>
    int main(){
        int n;
        printf("Enter a number ");
        scanf("%d",&n);
        // odd numbers are in addition
        // even numbers are in subtraction
        int sum = 0;
      if(n%2==0){
        sum = -n/2;
      }
        else{
            sum = -n/2 + n;
        }
      
        printf("The sum is : %d", sum);
        return 0;
    }