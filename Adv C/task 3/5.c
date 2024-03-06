#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i;
    char str[100];
    FILE *fp = fopen("5.txt","r");

    fgets(str,10,fp);
    for (i = 0; str[i]!='\0'; i++)
    {
        printf("%c",toupper(str[i]));
    }
    for (i = 0; str[i]!='\0'; i++)
    {
        printf("%c",tolower(str[i]));
    }
    
    fclose(fp);

    printf("\n");
    return 0;
}