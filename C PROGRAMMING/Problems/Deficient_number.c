#include <stdio.h>

int main()
{
    int n, sum = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(sum < n)
        printf("Deficient Number");
    else
        printf("Not Deficient Number");

    return 0;
}