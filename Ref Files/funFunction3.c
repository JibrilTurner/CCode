#include <stdio.h>
#include <stdlib.h>

double cube(double num)
{
    double result = num * num * num;
    return result; 
}


int sqaure(int num)
{
    return num * num; 
    printf("example of how return will break out a funtion");
}


int main()
    {

        printf("Answer: %f\n" , cube(3.0));
        printf("Answer: %d\n" , sqaure(3.0));
        return 0; 
    }