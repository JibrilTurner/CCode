//
// Created by mathe on 1/1/2023.
//

#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
    clock_t start_clk = clock();
    char menic[20];
    printf("Enter the string: ");
    gets(menic);
    // alternative scanf("%s",str);

    // character extraction
    printf("Printing the characters:: \n");
    for (int i = 0; menic[i] != '\0'; i++) {
        if (menic[i] != ' ') { // not a white space
            




            printf("%c ", menic[i]); // printing each characters in a new line
        }
    }


    printf("\nProcessor time used by program: %lg sec.\n", (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
    return 0;
}

