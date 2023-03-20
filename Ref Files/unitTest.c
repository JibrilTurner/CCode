//
// Created by mathe on 1/5/2023.
//

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#include <math.h>


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
    int test[5] = {add(5,5), add(5,2), add(2,10)};
    int solu[5] = {10,7,5};

    for (int i = 0; i < 5; i++) {
        if (test[i] == solu[i]) {
            printf("Test1.%d Passed \n", i);
        } else {
            printf("Test1.%d Failed \n", i);
        }
    }
}

void test2()
{
    char test[5][10] = {"123","321", "594","abc","fail"};
    char solu[5][10] = {"321","123", "495","cba","fail"};
    int cmpOutPut;
    size_t size = sizeof(test) / sizeof(test[0]);

    for (int i = 0; i < size; i++)
    {

        //printf("%s ", test[i]);
        cmpOutPut = strcmp(test[i], reverseString(solu[i]));
        if (cmpOutPut == 0) {
            printf("Test2.%d Passed \n",i);
        } else {
            printf("Test2.%d Failed \n",i);
        }

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