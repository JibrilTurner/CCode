//
// Created by mathe on 1/6/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>



char* reverseString(char string[25])
{
    char *rString = malloc(30);
    strcpy(rString, strrev(string));
    return rString;
}
char buff[25];
int ibuff;
int i ;
int num;






void read()
{
    int BUZZ_SIZE = 2;
    char buff[BUZZ_SIZE];
    FILE *fptr = fopen("test.txt", "r");
    fgets(buff, BUZZ_SIZE, fptr);
    int num = atoi(buff);
    printf(" %d \n" ,num);
    fclose(fptr);
}


void write()
{
    FILE *fptr;
    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("test.txt","a");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Write: ");
    scanf("%s",(&buff));
    num++;

    int ph = num + 1;
    if (ph >= num)
    {
        read();
        printf(" %d \n" ,num);
        num++;
    }
    fprintf(fptr,"\n%d %s",(ph),(buff));
    printf(" %d %s\n" ,num, buff);

    read();
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


void lock() {
    int i;

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


    int BUZZ_SIZE = 1024;
    char buff[BUZZ_SIZE];
    FILE *f = fopen("test.txt", "r");
    fgets(buff, BUZZ_SIZE, f);
    fclose(f);

    for (i = 0; buff[i] != '\0'; i++) {
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


    read();
    write();

     // lock();
      //key();

    return(0);
}



