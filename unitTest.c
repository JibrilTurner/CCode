//
// Created by mathe on 1/4/2023.
//

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <malloc.h>


int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

char* reverseString(char string[25])
{
    char *rString = malloc(30);
    strcpy(rString, strrev(string));
    return rString;
}

void test1()
    {
        int solu = 4;
        int expectedOutput   = add(2,2);

        if (solu == expectedOutput)
        {
            printf("Test1 Passed\n");
        }
        else
        {
            printf("Test1 Failed\n");
        }
    }

void test2()
{
    char solu[25] = "abc";
    char test[25] = "cba";
    int cmpOutput;

    cmpOutput = strcmp(test, reverseString(solu));

    if (cmpOutput == 0)
    {
        printf("Test2 Passed %s\n",test);
    }
    else
    {
        printf("Test2 Failed %s\n",test);
    }
}

int main()
{
    clock_t start_clk = clock();
    test1();
    test2();
    printf("\nProcessor time used by program: %lg sec.\n", (clock() - start_clk) / (long double) CLOCKS_PER_SEC);

    return 0;
}

