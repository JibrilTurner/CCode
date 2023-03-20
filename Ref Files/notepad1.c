#include<stdio.h>
#include<conio.h>
int main() //main returns an int
{
    int i;
    char a,b,str[100];

    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);//gets is dangerous

    printf("Enter the character to be replaced\n");
    scanf(" %c",&a); //space before %c is not neccessary here

    printf("Enter the character to replace\n");
    scanf(" %c",&b); //space before %c is compulsory here
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==a)
        {
            str[i] = b;
        }
        //else //This part is not neccessary
        //continue;
    }
    printf("The new string is ");
    puts(str);
    return 0; //main returns an int
}