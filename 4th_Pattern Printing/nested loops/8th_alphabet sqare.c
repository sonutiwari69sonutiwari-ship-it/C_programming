#include<stdio.h>
    int main(){
        int n;
        printf("enter a number of rows");
        scanf("%d", &n);
        // A B C D 
        // A B C D 
        // A B C D 
        // A B C D 
        for(int i=1;i<=n;i++){
            int a = 1;
            for(int j=1;j<=n;j++){ //responsible for printing  123456.....
                int d = a + 64;
                char ch = (char)d; // ch = (char)65 -->ch = A
                printf("%c ",ch);
                a++;
            }
            printf("\n");
        }
                return 0;
    }