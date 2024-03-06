#include <stdio.h>

void detailsPrint(int *roll, float *marks, char *gender)
{
    system("color 1A");
    printf("Roll number: %d\n", *roll);
    printf("Marks: %.2f\n", *marks);
    printf("Gender: %c\n", *gender);
}

int main()
{
    int roll;
    float marks;
    char gender;

    printf("Enter your roll number: ");
    scanf("%d", &roll);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your gender: ");
    scanf(" %c", &gender);

    detailsPrint(&roll, &marks, &gender);   
    
    printf("\n");
    return 0;
}