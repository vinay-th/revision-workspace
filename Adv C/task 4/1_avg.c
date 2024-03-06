#include <stdio.h>
int main()
{
    int a, b;
    int* pt1;
    int* pt2;

    pt1 = &a;
    pt2 = &b;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("The average of %d and %d is %d\n",*pt1, *pt2, ((*pt1) + (*pt2)) / 2);
    
    printf("\n");
    return 0;
}