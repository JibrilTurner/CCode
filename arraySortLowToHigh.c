//
// Created by mathe on 1/1/2023.
//
//
// Created by mathe on 12/31/2022.
//
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_clk = clock();
    int i;    int j;


    for(i = 0; i < 2; i++) {

        printf("%d\n", i);



        for (j = 0; j < 2; j++)

            printf("%d\n", j);

        }



        printf("\n\nProcessor time used by program: %lg sec.\n", (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
        return 0;
    }
