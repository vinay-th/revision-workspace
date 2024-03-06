#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char str[100];

    printf("Enter the string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            count++;
        }
        
    }
    
    printf("There are total %d vowels and %d consonants",count,strlen(str)-count);
    
    printf("\n");
    return 0;
}