#include <stdio.h>

void addNum(int* x, int* y)
{
    printf("The sum is %d", *x + *y);
}

void subNum(int* x, int* y)
{
    printf("The difference is %d", *x - *y);
}

// Main function

int main()
{
    int a, b, n;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("What do you want to do?\n");
    printf("1. Add\n2. Subtract\n");   
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            addNum(&a, &b);
            break;
        case 2:
            subNum(&a, &b);
            break;
        default:
            printf("Invalid input");
    }

    printf("\n");
    return 0;
}