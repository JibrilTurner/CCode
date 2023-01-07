//
// Created by mathe on 1/6/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>



int main ()
{
    int i, n;
    time_t t;


    /* Intializes random number generator */
    srand((unsigned) time(&t));




  

    for(n = 0 ;n < 6 ; n++)
    {
        for( i = 33 ; n < 6; i++ )
        {
            printf("%d ", rand() % 97);
        }    }

    printf("\n");


    return(0);
}



