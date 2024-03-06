#include <stdio.h>
int main()
{
    int freq[256]={0},i;
    char str[50];

    printf("Enter the string: ");
    scanf("%s",&str);

    for ( i = 0; str[i] !='\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    for ( i = 0; i < 255; i++)
    {
        if (freq[i] != '\0')
        {
            printf("\'%c\' occurs %d times in string\n",i,freq[i]);
        }
        
    }
    
    
    
    printf("\n");
    return 0;
}