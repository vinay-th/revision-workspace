#include <stdio.h>
#include <string.h>
int main()
{
    int i, freq[256]={0}, maxnum=0;
    char str[100], maxchar;

    printf("Enter the string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    for (i = 0; i < 255; i++)
    {
        if (freq[i] > maxnum)
        {
            maxnum = freq[i];
            maxchar = (char) i;
        }
        
    }
    
    printf("The max occuring char is \'%c\' it occured %d times",maxchar,maxnum);

    printf("\n");
    return 0;
}