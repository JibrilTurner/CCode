//
// Created by mathe on 1/6/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>

char buff[256];


int num;
char line[256];


char read()
{
    char *filename = "test.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
    }
    // reading line by line, max 256 bytes
    char buffer [256];
    while (fgets(buffer, 256, fp))
    // close the file
    fclose(fp);
}

int getLineCount()
{
    int maxFileName = 100;
    int count; // Line counter (result)

    char filename[maxFileName];
    char c;
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL)    // Check if file exists
    {
        printf("Could not open file %s", filename);
        return 1;
    }
    for (c = getc(fp); c != EOF; c = getc(fp))    // Extract characters from file and store in character c
    {
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
    }
    // Close the file
    fclose(fp);
    printf("This is the current line count %d\n", count);
    return count;

}

char find(int lineNumber)
{
    FILE *file = fopen("test.txt", "r");
    int count = 0;
    if ( file != NULL )
    {
        while (fgets(line, sizeof line, file) != NULL) /* read a line */
        {
            if (count == lineNumber)
            {
                return line;
            }
            else
            {
                count++;
            }
        }
        fclose(file);
    }
}

void test1()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        char test[] = {find(i)};
        if (test[i] == read()) {
            {
                printf("Test1.%d Passed \n", i);
            }
        }
        else
        {
            printf("Test1.%d Failed \n", i);
        }
    }
}

int main ()
{
  //  read();
   test1();
   // find(2);
    return(0);
}