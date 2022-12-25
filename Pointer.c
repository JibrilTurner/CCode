#include <stdlib.h>
#include <stdio.h>

int main()
{

    int age = 30;
    int * pAge = &age;

    printf("ages's memory address: %p\n", &age);
    printf("%d",*pAge);
    return 0;
}