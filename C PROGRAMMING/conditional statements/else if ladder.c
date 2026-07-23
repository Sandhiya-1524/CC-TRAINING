#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("Grade A");
    }
    else if (marks >= 75)
    {
        printf("Grade B");
    }
    else if (marks >= 55)
    {
        printf("Grade c");
    }
    else 
    {
        printf("Fail");
    }
}