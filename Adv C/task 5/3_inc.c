#include <stdio.h>

void inc(int *a)
{
    (*a)++;
}

int main()
{
    int a = 10;

    inc(&a);
    
    printf("%d\n", a);   
    
    printf("\n");
    return 0;
}