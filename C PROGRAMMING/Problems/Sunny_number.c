#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int root;

    printf("Enter a number: ");
    scanf("%d", &n);

    root = sqrt(n + 1);

    if(root * root == n + 1)
        printf("Sunny Number");
    else
        printf("Not Sunny Number");

    return 0;
}