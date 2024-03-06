#include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter the string: ");
    gets(str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n",str[i]);
    }
       
    
    printf("\n");
    return 0;
}