#include <stdio.h>
int main()
{
    int n;
    printf("Enter percentage");
    scanf("%d", &n);
    // more tham 80 --> A
    // more than 60 --> B
    // more than 40 --> C
    // less than 40 --> D
    // 1st method
    // if(n>80){
    //     printf("A grade\n");
    // }
    // else if(n>60){
    //     printf("B grade\n");
    // }
    // else if(n>40){
    //     printf("c grade\n");
    // }
    // if(n<=40){
    //     printf("D grade\n");
    // }
    // 2nd method
    if (n > 80)
    {
        printf("A grade\n");
    }
    else
    {
        if (n > 60)
        {
            printf("B grade\n");
        }
        else
        {
            if (n > 40)
            {
                printf("C grade\n");
            }
            else
            {
                printf("D grade\n");
            }
        }
    }
    return 0;
}