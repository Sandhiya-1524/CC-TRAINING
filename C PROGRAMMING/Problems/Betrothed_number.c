#include <stdio.h>

int sumProper(int n)
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

    if(sumProper(a) == b + 1 && sumProper(b) == a + 1)
        printf("Betrothed Numbers");
    else
        printf("Not Betrothed Numbers");

    return 0;
}