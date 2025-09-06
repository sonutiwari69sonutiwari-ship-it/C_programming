#include<stdio.h>
int main(){
    int n;
    printf("Enter a year");
    scanf("%d", &n);
if (n%4==0){
    printf("is a Leap Year.");
}
else{
    printf("is Not a Leap Year.");
}
    return 0;
}
