#include <stdio.h>

int sumDiv(int n)
{
    int sum = 1;

    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return sum;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(sumDiv(a) == b && sumDiv(b) == a)
        printf("Amicable Numbers");
    else
        printf("Not Amicable Numbers");

    return 0;
}