//
// Created by mathe on 1/5/2022.
//
#include <stdio.h>
#include <math.h>// required for math
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <malloc.h>

char* reverseString(char string[25])
{
    char *rString = malloc(30);
    strcpy(rString, strrev(string));
    return rString;
}





int main() {

    char test[5][10] = {"123","321", "594","abc","fail"};
    char solu[5][10] = {"321","123", "495","cba","fail"};
    int cmpOutPut;
    size_t size = sizeof(test) / sizeof(test[0]);


    for (int i = 0; i < size; i++)

    {
//        printf("%s ", test[i]);

        cmpOutPut = strcmp(test[i], reverseString(solu[i]));
        if (cmpOutPut == 0)

        {
            printf("Test2.%d Passed \n",i);
        }
        else
        {
            printf("Test2.%d Failed \n",i);
        }
    }


    return 0;
}
