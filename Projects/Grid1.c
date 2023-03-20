#include <stdio.h>
#include <intrin.h>

void makeGrid()
{
   int i, j;

    for (i = 0; i < 3; i++) 
    {
        printf("         |         |         \n");
        if (i != 2)
        {
            printf("         |         |\n");
            printf("         |         |\n");
            printf("---------|---------|---------\n");
            printf("         |         |\n");
            printf("         |         |\n");

        }
    }
}

int main() 
{
    makeGrid();
    return 1; 
}
 