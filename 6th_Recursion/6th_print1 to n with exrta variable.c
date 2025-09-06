 #include <stdio.h>
void  increasing(int x,int n){ // parameterised way
    if(x>n) return;            // extra variable ko leke kiya hain
    printf("%d\n", x);        
    increasing(x+1,n);          

return ;
}


int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    increasing(1,n);

    return 0;
}
