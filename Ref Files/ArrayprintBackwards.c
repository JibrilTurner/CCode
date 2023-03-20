//
// Created by mathe on 12/31/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    clock_t start_clk = clock();

    int arr[] = {12, 4,16, 42,54,555};

    for (int i = 6; i >= 0; --i)
    {
        printf("%d\n", arr[i]);
    }

    printf("Processor time used by program: %lg sec.\n", (clock() - start_clk) / (long double) CLOCKS_PER_SEC);

    return  0;
}

