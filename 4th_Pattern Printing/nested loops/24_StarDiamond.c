#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
     int nsp = n/2; // no. of spaces
     int nst = 1; //no. of star
     int ml = n/2 +1; //middle line
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){ // for spaces
                printf(" ");
        }
       for(int k=1;k<=nst;k++){// for star
                printf("*");
    }
    if(i<ml){
        nsp--;
        nst+=2; // nst = nst + 2
    }
    else{
        nsp++;
        nst-=2; // nsp = nsp+ 2
    }
    printf("\n");
}
    return 0;
}