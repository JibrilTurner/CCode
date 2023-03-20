//
// Created by mathe on 12/15/2022.
//
#include <stdio.h>
#include <string.h>

int main()
{
    int numOne; int numTwo; char Oop[5];

    printf("enter Number ");
    scanf("%d" , &numOne);

    printf("enter Number ");
    scanf("%d" , &numTwo);

    printf("sub add multi or div ");
    scanf("%s" , Oop);

    if( strcmp(Oop, "add") == 0 )
    {
        printf("%d", numOne+numTwo);
    }
    else if (strcmp(Oop, "sub") == 0)
    {
        printf("%d", numOne-numTwo);
    }
    else if (strcmp(Oop, "multi") == 0)
    {
        printf("%d", numOne-numTwo);
    }
    else
    {
        printf("%d", numOne/numTwo);
    }

    return 0;
}
 