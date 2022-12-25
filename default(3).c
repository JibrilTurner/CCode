#include <stdio.h>

int main()
{
    char const *file_name="Testcake.txt";
    int j=0; 
    FILE *file=fopen(file_name,"Testcake.txt");
    if (file==NULL)
    for (j=0; j<10; j++)
    {
        fprintf(file,"%d\n",j);
    }
    fclose(file);
    return 1;
}