//
// Created by mathe on 1/3/2023.
//
#include <stdlib.h>
#include <stdio.h>

int main ( ){


    char c; int i;
    for (c = 'A'; c <= 'Z'; ++c)
    {
        printf( "%c\n", c);
    }
        for (i = 0; i < 26; i++)
        {
            printf("\t%d\n", i);
        }

    return 0;
}