//
// Created by mathe on 12/22/2022.
//
#include <stdlib.h>
#include <stdio.h>

int wloop(int index)
{
    //int index = 3;
    while(index <= 5)
    {
        printf("%d\n", index);
        index++;
        // or index = index + 1;
    }
    return index++;
}

int dowloop(int index)
{
    //int index = 15;
    do {
        printf("%d\n", index);
        index++;

    }
    while(index <= 15);
    return index++;
}

int main()
{


wloop (3);
//dowloop(5);
    return 0;
}