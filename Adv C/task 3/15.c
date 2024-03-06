#include <stdio.h>
int main()
{
    int i;
    char str[19];
    FILE *fp = fopen("15.txt","w");

    fseek(fp,0,SEEK_END);

    fprintf(fp,"Hello this is new");
    
    printf("\n");
    return 0;
}