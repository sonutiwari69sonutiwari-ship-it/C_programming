// #include<stdio.h>

// int main(){
//     printf("*****\n*****\n*****\n");
//     return 0;
// }
// we use always 2nd method which is given below

   #include <stdio.h>

int main() {
    int n;
    printf("Enter a number of rows");
    scanf("%d",&n);  
     int m;
    printf("Enter a number of columns");
    scanf("%d",&m); 
    //******* *...... upto n no of stars

for(int i=1;i<=n;i++){   // outer loop (rows)
    for(int i=1;i<=m;i++){   // inner loop (columns)
        printf("*");
    }
    printf("\n"); // har line ke baad ek enter marne ke liye
}

return 0;
}
