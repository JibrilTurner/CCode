//
// Created by mathe on 12/31/2022.
//
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_clk = clock();

    printf("\nProcessor time used by program: %lg sec.\n", (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
    return 0;
}

