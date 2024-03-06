#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    x = strcmp(str1,str2);

    if (x > 0)
    {
        printf("String one is greater than string two");
    }
    else if(x == 0)
        printf("The strings are equal");
    else
    {
        printf("String two is greater than string one");
    }
    
    


    printf("\n");
    return 0;
}