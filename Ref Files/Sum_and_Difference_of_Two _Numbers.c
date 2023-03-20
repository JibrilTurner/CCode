//
// Created by mathe on 12/23/2022.
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
Sample Input
10 4
4.0 2.0
Sample Output

14 6
6.0 2.0
*/

int main()
{

    int a; int b;
    float c; float d;

    scanf("%d %d %f %f" , &a, &b, &c, &d);
    printf("%d " , (a + b));
    printf("%d\n" , (a - b));
    printf("%0.1f ",  (c + d));
    printf("%0.1f", (c -  d));

    return 0;
}
