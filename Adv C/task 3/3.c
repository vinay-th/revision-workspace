#include <stdio.h>
int main()
{
    int i;
    char c;
    FILE *fp = fopen("3.txt","w");

    for (i = 1; i < 101; i++)
    {
        fprintf(fp,"%d\n",i);
    }

    fclose(fp);
       
    
    printf("\n");
    return 0;
}