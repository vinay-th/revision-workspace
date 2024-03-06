#include <stdio.h>

void sqrCube(int *ptr)
{
    printf("Square of %d is %d\n", *ptr, (*ptr)*(*ptr));
    printf("Cube of %d is %d\n", *ptr, (*ptr)*(*ptr)*(*ptr));
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sqrCube(&n);
    
    printf("\n");
    return 0;
}