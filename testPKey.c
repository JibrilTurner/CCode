//
// Created by mathe on 1/6/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>

char buff[25];
int ibuff;
int i ;
int num;
char line[256]; /* or other suitable maximum line size */

char* reverseString(char string[25])
{
    char *rString = malloc(30);
    strcpy(rString, strrev(string));
    return rString;
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

const char* find()
{
    int lineNumber;
    printf("Enter Line Num: ");
    scanf("%d", &lineNumber);
    FILE *file = fopen("test.txt", "r");
    int count = 0;
    if ( file != NULL )
    {
        while (fgets(line, sizeof line, file) != NULL) /* read a line */
        {
            if (count == lineNumber)
            {
                printf("%s",line);
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

const char* outputString()
{

    find(line);

    for (int i = 0, j; line[i] != '\0'; ++i) {

        // enter the loop if the character is not an alphabet
        // and not the null character
        while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
            for (j = i; line[j] != '\0'; ++j) {

                // if jth element of line is not an alphabet,
                // assign the value of (j+1)th element to the jth element
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    return line;
    puts(line);
    return 0;
}

void go()
{
#define BUFFER_SIZE 1000

    FILE * fPtr;
    FILE * fTemp;

    char buffer[BUFFER_SIZE];
    char newline[BUFFER_SIZE];
    int count;



    outputString(line);

    /* Remove extra new line character from stdin */
    fflush(stdin);

    printf("Replace '%d' line with: ", line);
    fgets(newline, BUFFER_SIZE, stdin);

    fPtr = fopen("test.txt","r");

    fTemp = fopen("replace.tmp", "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL || fTemp == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(EXIT_SUCCESS);
    }


    /*
     * Read line from source file and write to destination
     * file after replacing given line.
     */
    count = 0;
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        count++;

        if (count == line)
            fputs(newline, fTemp);
        else
            fputs(buffer, fTemp);
    }


    /* Close all files to release resource */
    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove("test.txt");

    /* Rename temporary file as original file */
    rename("replace.tmp", "test.txt");
}

void write()
{
    FILE *fptr;
    fptr = fopen("test.txt","a");
    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }
    printf("Write: ");
    scanf("%s",(buff));

    if (num > getLineCount()){
        printf("num inside ph greater than num  %d \n" ,num);
        num++;
    }
    fprintf(fptr,"\n%d %s",(getLineCount()),(buff));
    fclose(fptr);
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
    char buffer [MAX_LENGTH];
    while (fgets(buffer, MAX_LENGTH, fp))
        printf("     %s",buffer);
    // close the file
    fclose(fp);
}

int die()
{
    printf("death is upon");
    return 1;
}

int outputFirstNum()
{
    int BUZZ_SIZE = 3;
    char line[BUZZ_SIZE];
    FILE *fptr = fopen("test.txt", "r");
    fgets(line, BUZZ_SIZE, fptr);
    int num = atoi(line);
    printf("%d\n",num );
    return num;
}

void key()
{
    int v;

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

    char* str;

    printf("Enter Semi Encrypted Password");
    scanf("%s", str);
    for(v=0;str[v]!='\0';v++)
    {
        if(str[v]==ra){
            str[v] = da;}
        else if(str[v]==rb){
            str[v] = db;}
        else if(str[v]==rc){
            str[v] = dc;}
        else if(str[v]==rd){
            str[v] = dd;}
        else if(str[v]==re){
            str[v] = de;}
    }
    puts(str);
}

const char*  lock()
{
    int t;

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

    outputString(line);


    for (t = 0; line[t] != '\0'; t++) {
        if (line[t] == a) {
            line[t] = ra;
        } else if (line[t] == b) {
            line[t] = rb;
        } else if (line[t] == c) {
            line[t] = rc;
        } else if (line[t] == d) {
            line[t] = rd;
        } else if (line[t] == e) {
            line[t] = re;
        }
    }

    //else //This part is not neccessary
        //continue;
    FILE *fptr;
    fptr = fopen("test.txt", "a+");
    if (fptr == NULL){
        printf("Error!");
        exit(1);
    }
    printf("%s", line);
    fclose(fptr);
    return line;



}

void menuTopBar()
{
    printf("| ^Delete | Copy | ^Paste | New Password | Encrypt | Decrypt | Exit ^| ");

    read();
    int opt;

    scanf("%d",&opt);
    if (opt == 0){
        printf("Run delete()");
    }
    else if (opt == 1){
        printf( "Run copy");
    }
    else if (opt == 2){
    printf("Run paste()");
    }
    else if (opt == 3){
        printf("Run Write()\n");
        write();
        menuTopBar();
    }
    else if (opt == 4){
        printf("Run Write()\n");
        write();
        menuTopBar();
    }
    else if (opt == 5){
        printf("Run Write()\n");
        write();
        menuTopBar();
    }
    else{
        printf("Run Exit");
        die();
    }

}

int main ()
{
    //write();          //Done// will ask the user to add to the txt file;
    //read();           //Done// will dump out all stored values

    //key();            //Not Done// will convert the symbols into chars
    //lock();           //Not Done// will convert the chars into symbols

    //go();             //Not Done// will go to selected line and then allow for modification of the string, uses outputString() -> find()
    //find();           //Done// will find a password based on a index
    //outputFirstNum(); //Done// get the lowest number
    //outputString();   //Done// will ignore the number and output the string of a write();
    //getLineCount();   //Done// get highest number

    //menuTopBar();     //Not Done// Will display and Add a menu (the god Function)

    //delete();         //Not Done// will go to selected line then will delete it then subtract all indexes below it by one go() -> outputString() -> find()
    //copyAndPaste();   //Not Done// will copy the password on a line number, then allow the user to paste that password on another line number
    //clear();          //Not Done// will clear out the txt file
    return(0);
}