// Print the sum of the series:
// 1 + 2 + 3 + 4.......upto n.
  
#include<stdio.h>
    int main(){
        int n;
        printf("Enter a number ");
        scanf("%d",&n);
        int sum = 0;
        for(int i=1;i<=n;i++){
            sum = sum + i;
        }
        printf("The sum is : %d", sum);
        return 0;
    }