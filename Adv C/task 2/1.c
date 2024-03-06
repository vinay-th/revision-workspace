#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char c;

    printf("Enter the char you want to check: ");
    scanf("%c",&c);   
    
    if (isalnum(c))
    {
        if (isalpha)
        {
            printf("The char is alphabet\n");
            if (isupper(c))
            {
                printf("The char is upper case\n");
            }
            else  
                printf("The char is lower case\n");
        }
        else
            printf("The char is numeric");
        
    }
    else if (isspace(c))
    {
        printf("The char is a space\n");
    }
    else 
    {
        printf("Undefined char");
    }
    
    
    

    printf("\n");
    return 0;
}