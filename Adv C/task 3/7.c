#include <stdio.h>
int main()
{
    int i;
    char ch;
    FILE *fp = fopen("7.txt","r");

    for(i = 0; (ch = fgetc(fp)) != EOF;i++)
    {
        printf("%c",ch);
    }
    
    printf("\n");
    return 0;
}