//
// Created by mathe on 1/1/2023.
//
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_clk = clock();
    int i; int j;

    for(i = 0; i < 5; i++)
    {
        printf("\n");

        for (j = 0; j < 6; j++)
        {
            printf("+ ");
        }
    }
    printf("\n\nProcessor time used by program: %lg sec.\n",(clock() - start_clk) / (long double) CLOCKS_PER_SEC);
    return 0;
}