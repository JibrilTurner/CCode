#include <stdio.h>
// this file explains how to save data to a file in C
int main()
{
    //file name that is used to store the data
    // this is a string literal
    char const *file_name="ko.txt";
    int j=0; // not allowed in the for loop to define a counter 
    // if you declare j in the loop, you will get this error: [Error] 'for' loop initial declarations are only allowed in C99 or C11 mode
     
    // open the file for writting, "w" option will delete the content of the file
    FILE *file=fopen(file_name,"ko");
     
    if (file==NULL)
    {
        printf("Could not open the file %s",file_name);
        return 0;
    }
     
    for (j=0; j<10; j++)
    {
        fprintf(file,"%d\n", j);
    }
     
     
    fclose(file);
     
    return 1;
}