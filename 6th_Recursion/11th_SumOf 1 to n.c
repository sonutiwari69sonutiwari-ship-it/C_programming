// using recursion
#include<stdio.h>
void sum(int n, int s){ //  yaha s means sum hi aur sum starting me zero hota hai
    if(n==0) {
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
  sum(n,0);

    return 0;
}