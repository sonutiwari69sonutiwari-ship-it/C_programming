#include <stdio.h>
void greeting(int n){
    if(n==0) return;
    printf("GM\n");                            // for(int i=1;i<=n;i++){
    greeting(n-1);                            //     printf("GM\n");
                                             // }
return ;
}


int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    greeting(n);
    return 0;

    

    return 0;
}
