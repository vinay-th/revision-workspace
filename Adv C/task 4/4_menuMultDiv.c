#include <stdio.h>

void multNum(int* x, int* y)
{
    printf("The sum is %d", *x * *y);
}

void divNum(int* x, int* y)
{
    printf("The difference is %d", *x / *y);
}

// Main function

int main()
{
    int a, b, n;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("What do you want to do?\n");
    printf("1. Multiply\n2. Divide\n");
    printf("Enter your choice: \n");   
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            multNum(&a, &b);
            break;
        case 2:
            divNum(&a, &b);
            break;
        default:
            printf("Invalid input");
    }

    printf("\n");
    return 0;
}