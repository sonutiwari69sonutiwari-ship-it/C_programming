#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        { // i is a factor of n
            a = 1;
            break;
        }
    }

    if (n == 1)
        printf("1 is neither primw nor copmosite");
    else if (a == 0)
        printf("the given number is prime\n");
    else
        printf("The given number is composite");

    return 0;
}
