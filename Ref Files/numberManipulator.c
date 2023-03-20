//
// Created by mathe on 1/1/2023.
//
#include <stdio.h>
#include <time.h>
#include <string.h>


char da = '1';
char db = '2';
char dc = '3';
char dd = '4';
char de = '5';
char d[5][10] = {"1","2", "3","4","5"};

char ra = '!';
char rb = '#';
char rc = '%';
char rd = '$';
char re = '&';



char key(char str[25]){
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ra){
            str[i] = da;}
        else if(str[i]==rb){
            str[i] = db;}
        else if(str[i]==rc){
            str[i] = dc;}
        else if(str[i]==rd){
            str[i] = dd;}
        else if(str[i]==re){
            str[i] = de;}}
    puts(str);}


char lock(char str[25]) {
    int i;

    char a = '1';
    char b = '2';
    char c = '3';
    char d = '4';
    char e = '5';



    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == a) {
            str[i] = ra;
        } else if (str[i] == b) {
            str[i] = rb;
        } else if (str[i] == c) {
            str[i] = rc;
        } else if (str[i] == d) {
            str[i] = rd;
        } else if (str[i] == e) {
            str[i] = re;
        }
        //else //This part is not neccessary
        //continue;
    }
    puts(str);
}










int main()
{
    char str[25];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);//gets is dangerous




    clock_t start_clk = clock();

    lock(str);
    key(str);


    printf("\nProcessor time used by program: %lg sec.\n", (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
    return 0;
}



/*
 * https://stackoverflow.com/questions/1554180/why-is-the-if-statement-considered-evil
Patterns which only differ in their if conditions can be reused
Regarding the argument about replacing if with a "predicate" in your question, Haines probably wanted to mention that sometimes similar patterns exist over your code, which differ only in their conditional expressions. Conditional expressions do emerge in conjunction with ifs, but the whole idea is to extract a repeating pattern into a separate method, leaving the expression as a parameter. This is what LINQ already does, usually resulting in cleaner code compared to an alternative foreach:

Consider these two very similar methods:

// average male age
public double AverageMaleAge(List<Person> people)
{
    double sum = 0.0;
    int count = 0;
    foreach (var person in people)
    {
       if (person.Gender == Gender.Male)
       {
           sum += person.Age;
           count++;
       }
    }
    return sum / count; // not checking for zero div. for simplicity
}

// average female age
public double AverageFemaleAge(List<Person> people)
{
    double sum = 0.0;
    int count = 0;
    foreach (var person in people)
    {
       if (person.Gender == Gender.Female) // <-- only the expression
       {                                   //     is different
           sum += person.Age;
           count++;
       }
    }
    return sum / count;
}
This indicates that you can extract the condition into a predicate,
 leaving you with a single method for these two cases (and many other future cases):
*/