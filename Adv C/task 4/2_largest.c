#include <stdio.h>

void largestNum(int* ptr)
{
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*(ptr + i) > temp)
        {
            temp = *(ptr + i);
        }
    }
    printf("The largest number is: %d", temp);
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
       
    largestNum(a);
    
    printf("\n");
    return 0;
}