#include <stdio.h>

int reverse(int n)
{
    int rev = 0;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n, sq1, sq2;

    printf("Enter a number: ");
    scanf("%d", &n);

    sq1 = n * n;
    sq2 = reverse(n);
    sq2 = sq2 * sq2;

    if(sq1 == reverse(sq2))
        printf("%d is an Adam Number.", n);
    else
        printf("%d is not an Adam Number.", n);

    return 0;
}