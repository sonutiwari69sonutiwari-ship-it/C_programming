#include<stdio.h>
    int main(){
        int CP;
        printf("Enter cost price");
        scanf("%d", &CP);
        int SP;
        printf("Enter selling price");
        scanf("%d", &SP);
        if(SP>CP){
            printf("profit");
        }
        else if(SP<CP){
            printf("Loss");
        }
        else{
            printf("No profit, no loss");
        }
        return 0;
    
}