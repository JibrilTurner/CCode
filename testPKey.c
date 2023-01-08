//
// Created by mathe on 1/6/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char buff[25];
int ibuff;
int i ;
int num;


char* reverseString(char string[25])
{
    char *rString = malloc(30);
    strcpy(rString, strrev(string));
    return rString;
}

int getlinecount()
{
    int maxFileName = 100;
    int count = 0; // Line counter (result)
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
    printf("%d\n", count);
    return count;
}

int outputfirstnum()
{
    int BUZZ_SIZE = 3;
    char buff[BUZZ_SIZE];
    FILE *fptr = fopen("test.txt", "r");
    fgets(buff, BUZZ_SIZE, fptr);
    int num = atoi(buff);
    printf("\n%d\n",num );
    return num  ;
}
void read()
{
    char *filename = "test.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
    }
    // reading line by line, max 256 bytes
    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];
    while (fgets(buffer, MAX_LENGTH, fp))
        printf("%s", buffer);

    // close the file
    fclose(fp);
}

char find()
{
    int lineNumber;
    printf("\nwhat line would you like");
    scanf("%d", &lineNumber);
    FILE *file = fopen("test.txt", "r");
    int count = 0;
    if ( file != NULL )
    {
        char line[256]; /* or other suitable maximum line size */
        while (fgets(line, sizeof line, file) != NULL) /* read a line */
        {
            if (count == lineNumber)
            {
                printf("%s ", line);
                return line;
                fclose(file);
            }
            else
            {
                count++;
            }
        }
        fclose(file);
    }
}
void write()
{
    FILE *fptr;
    fptr = fopen("test.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Write: ");
    scanf("%s",(buff));

    if (num > getlinecount())
    {
        printf("num inside ph greater than num  %d \n" ,num);
        num++;
    }
    fprintf(fptr,"\n%d %s",(getlinecount()),(buff));
    fclose(fptr);
}

void key(){
    int i;

    char da = 'a';
    char db = 'e';
    char dc = 'i';
    char dd = 'o';
    char de = 'u';

    char ra = '!';
    char rb = '#';
    char rc = '%';
    char rd = '$';
    char re = '&';

    int BUZZ_SIZE = 1024;
    char buff[BUZZ_SIZE];
    FILE *f = fopen("test.txt", "r");
    fgets(buff, BUZZ_SIZE, f);
    fclose(f);

    for(i=0;buff[i]!='\0';i++)
    {
        if(buff[i]==ra){
            buff[i] = da;}
        else if(buff[i]==rb){
            buff[i] = db;}
        else if(buff[i]==rc){
            buff[i] = dc;}
        else if(buff[i]==rd){
            buff[i] = dd;}
        else if(buff[i]==re){
            buff[i] = de;}
    }
    printf("output in key ");
    puts(buff);
}

void lock()
{
    int i;
    find();

    char a = 'a';
    char b = 'e';
    char c = 'i';
    char d = 'o';
    char e = 'u';

    char ra = '!';
    char rb = '#';
    char rc = '%';
    char rd = '$';
    char re = '&';


    for (i = 0; find[i] != '\0'; i++) {
        if (buff[i] == a) {
            buff[i] = ra;
        } else if (buff[i] == b) {
            buff[i] = rb;
        } else if (buff[i] == c) {
            buff[i] = rc;
        } else if (buff[i] == d) {
            buff[i] = rd;
        } else if (buff[i] == e) {
            buff[i] = re;
        }
        //else //This part is not neccessary
        //continue;
    }

    FILE *fptr;
    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("test.txt","a+");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fprintf(fptr,"%s %s",(buff) , (buff));
    fclose(fptr);

    printf("output in lock ");
    puts(buff);
}



int main ()
{

    //getlinecount();
  //  write();
   // read();
    //outputfirstnum();
    find();
    lock();
//    key();

    return(0);
}



