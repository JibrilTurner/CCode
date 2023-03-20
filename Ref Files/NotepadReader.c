#include <stdio.h>
#include <stdlib.h>
#include <intrin.h>

#define MAX_LINE_LENGTH 1000

int main() {


    char usernamekey[50] = "JibrilTurner";  // declaration of char array
    char passwordkey[50] = "a";  // declaration of char array

    int valueOne; int valueTwo; int a;
    FILE    *textfile;
    char    line[MAX_LINE_LENGTH];

    textfile = fopen("test.txt", "r");
    if(textfile == NULL)
    {
        return 1;
    }


    while(fgets(line, MAX_LINE_LENGTH, textfile)){
        printf("%s\n", line);
    }

    valueOne=strcmp(line,passwordkey);//when comparing strings
    valueTwo=strcmp(line,usernamekey);//when comparing strings

    printf("%d\n",valueOne);
    printf("%d\n",valueTwo);

    if(valueOne == 0 && valueTwo == 0)
    {
        printf("\nwoohoo");
    }
    else
    {
        printf("\nboohoo\n");
    }

    fclose(textfile);
    return 0;
}