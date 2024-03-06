#include <stdio.h>
int main()
{
    char str[100];
    FILE *fp = fopen("1.txt","r");

    fgets(str,100,fp);

    puts(str);
    
    printf("\n");
    return 0;
}