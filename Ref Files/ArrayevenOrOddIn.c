//
// Created by mathe on 12/31/2022.
//
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_clk = clock();

    int i;
    int arr[] = {4, 1,3, 42,7,555};

    for(i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("its even\n");
        }
        else
            printf("its odd\n");
    }

    printf("Processor time used by program: %lg sec.\n",
           (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
    return 0;
}

