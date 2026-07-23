#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("vote\n");
        if (age >= 25)
        printf("Eligible candidate\n");
        else
        printf("Not Eligible candidate\n");
    }
    else
        printf("No vote\n");
}