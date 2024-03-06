#include <stdio.h>
int main()
{
    int count = 0;
    char ch;
    FILE *fp = fopen("8.txt","r");

    while((ch = fgetc(fp))!=EOF)
    {
        count ++;
    }

    printf("There are %d characters in file",count);
    
    printf("\n");
    return 0;
}