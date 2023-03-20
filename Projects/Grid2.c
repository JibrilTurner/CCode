#include <stdio.h>

void makeBox()
{
    printf("|         |          |          |\n"
           "|         |          |          |\n"
           "|         |          |          |\n");
}

void makeGrid()
{
    printf("|---------|----------|----------|\n");

    int i;
    for (i = 0; i < 3; i++){
        makeBox();
        printf("|---------|----------|----------|\n");
    }

}


int main()
{
    makeGrid();
    return 0;
}
