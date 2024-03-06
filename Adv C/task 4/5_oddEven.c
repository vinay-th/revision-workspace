#include <stdio.h>

void oddEven(int* ptr, int count)
{
    for (int i = 0; i < count; i++)
    {
        if(*(ptr+i) % 2 ==0)
        {
            printf("%d is even\n", *(ptr+i));
        }
        else
        {
            printf("%d is odd\n", *(ptr+i));
        }
    }
    
}

int main()
{
    int a[5];
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    oddEven(a, 5);
    
    printf("\n");
    return 0;
}