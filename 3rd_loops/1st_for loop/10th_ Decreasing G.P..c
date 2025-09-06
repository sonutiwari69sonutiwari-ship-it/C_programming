#include <stdio.h>
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float a = 100.0; // first term
    for(int i = 1; i <= n; i++){
        printf("%.3f ", a); // prints with 2 decimal places
        a = a / 2; // common ratio = 0.5
    }
    return 0;
}
