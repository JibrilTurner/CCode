//
// Created by mathe on 1/1/2023.
//

#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_clk = clock();
    int i; int j;

    for(i = 6; i > 0; i--)
    {
        printf("\n");

        for (j = 1; i > j ; j++)
        {
            printf("%d ", j);
        }
    }



    printf("\nProcessor time used by program: %lg sec.\n", (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
    return 0;
}



