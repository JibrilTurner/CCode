//
// Created by mathe on 12/31/2022.
//
/*
// Created by mathe on 12/31/2022.
//
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11
 */


#include <stdio.h>
#include <stdlib.h>

int doesmath(int *, int *);




int main(){

    int num1;int num2;int sum;

    printf("enter your num");
    scanf("%d", &num1);

    printf("enter your num");
    scanf("%d", &num2);

    sum = doesmath(&num1, &num2);
    printf(" The sum of %ld and %ld is %ld\n\n", num1, num2, sum);
    return  0;
}

int doesmath(int *num1, int *num2)
{
    int sum;
    sum = *num1 + *num2;
    return sum;
}