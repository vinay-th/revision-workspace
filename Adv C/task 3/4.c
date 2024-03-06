#include <stdio.h>
int main()
{
    char str[100];
    FILE *fp = fopen("4_1.txt","r");

    fgets(str,100,fp);

    fclose(fp);
    fp = fopen("4_3.txt","a+");

    fputs(str,fp);

    fclose(fp);

    fp = fopen("4_2.txt","r");

    fgets(str,100,fp);

    fclose(fp);

    fp = fopen("4_3.txt","a+");

    fputs(str,fp);

    fclose(fp);
    
    printf("\n");
    return 0;
}