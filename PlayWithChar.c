#include<stdio.h>
int main()
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s\n",&s);
    fgets(sen,100,stdin);
    printf("%c\n",ch);
    printf("%s\n",s);
    puts(sen);
    return 0;
}