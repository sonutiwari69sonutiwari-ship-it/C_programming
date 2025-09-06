// Print the nth fibonacci number
// 1 1 2 3 5 8 13 21 34 55 89 ......
// 1 2 3 4 5 6 7   8 9  10 11...ye no. of terms hain
// yaha par piche do ka sum aage wala hain
// jaise 1 + 1 = 2, 2 + 3=5.....


#include<stdio.h>
    int main () {
        int n;
        printf("Enter a number : ");
        scanf("%d", &n);
        int a = 1;
        int b = 1;
        int sum = 1;
        for(int i=1;i<=n-2;i++){
            sum = a + b;
            a = b;
            b = sum;
                printf("The %dth fibonacci is  : %d\n",n, sum);
        }
     
        return 0;
    }
   