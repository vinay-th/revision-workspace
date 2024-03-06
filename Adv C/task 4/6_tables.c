#include <stdio.h>

void tablePrint(int *a)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",*a,i,(*a)*i);
    }
    
}

int main()
{
    int a;

    printf("Enter the table you want to print : ");
    scanf("%d",&a);

    tablePrint(&a);   
    
    printf("\n");
    return 0;
}