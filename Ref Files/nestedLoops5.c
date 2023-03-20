//
// Created by mathe on 1/1/2023.
//

#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_clk = clock();
    int i; int j; int test;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= 20; j+=4)
        {
            printf("%d ||| %d\n", i , j );
        }

    }
    printf("\nProcessor time used by program: %lg sec.\n", (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
    return 0;
}


