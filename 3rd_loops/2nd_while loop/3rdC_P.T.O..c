#include<stdio.h>
    int main(){
        int x = 4,y,z;
        y = --x;   
        z = x--;
            printf("%d %d %d \n",x,y,z);
        
        
        return 0;
    }

    // x++,x-- --> this means, use x, then increment/decrement
    // ++x,--x --> this means, incement then use