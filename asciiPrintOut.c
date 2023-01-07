//
// Created by mathe on 1/3/2023.
//
#include <stdio.h>
int main()
{
    // declare local variable
    int i;  int q;
    int j;  int l;
    int a;
    // use for loop to print the capital letter from A to Z
    for ( i = 33; i < 47; i++)
    {
        printf (" \n33-46 Syombles  The ASCII value of  %c is %d ", i, i);
    }
    for ( j = 48; j < 58; j++)
    {
        printf (" \n48-57 Numbers The ASCII value of  %c is %d ", j, j);
    }
    for ( l = 58; l < 65; l++)
    {
        printf ("\n58-64 Syombles2 The ASCII value of  %c is %d ", l, l);
    }
    for ( q = 65; q < 91; q++)
    {
        printf ("\n65-90 Capital The ASCII value of  %c is %d ", q, q);
    }
    for ( a = 97; a < 123; a++)
    {
        printf ("\n97-122 LowerCase The ASCII value of  %c is %d ", a, a);
    }


    return 0;
}