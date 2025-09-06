//             for any patterns:
// 1) no. of lines kitni hogi
// 2)in each line what is happening
#include<stdio.h>
    int main(){
        int n;
        printf("enter a number of rows");
        scanf("%d", &n);
        for(int i=1;i<=n;i++){
            int a = n;
            for(int j=1;j<=a;j++){
                printf("* ");
            }
            a--;
            printf("\n");
        }
                return 0;
    }