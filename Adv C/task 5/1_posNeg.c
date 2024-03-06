#include <stdio.h>

void checkPos(int *a)
{
    if(*a > 0)
    {
        printf("The number is positive.");
    }
    else if(*a < 0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is zero.");
    }
}

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);
    
    checkPos(&a);   
    
    printf("\n");
    return 0;
}