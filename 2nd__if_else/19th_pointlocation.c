#include<stdio.h>
int main (){
    int x,y;
    printf("Enter the coordinate");
    scanf("%d %d", &x, &y);
    if(x==0 && y==0){
        printf("The point is origin");
    }
    else if(x==0){
        printf("Lies on y axix");
    }
    else if(y==0){
        printf("lies on x axix");
    }
    else{
        printf("The point does not lies on x or y axix and it is not origin");
    }
    return 0;
}