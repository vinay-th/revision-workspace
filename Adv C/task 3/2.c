#include <stdio.h>
int main()
{
    char c,ch = 0;
    FILE *fp = fopen("2.txt","r+");

    printf("Enter the number: ");
    scanf("%c",&c);
    fputc(c,fp);

    rewind(fp);
    ch = fgetc(fp);

    printf("The first character of the file is: %c",ch);
    
    printf("\n");
    return 0;
}