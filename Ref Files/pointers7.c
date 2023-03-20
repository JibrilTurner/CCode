//
// Created by mathe on 12/31/2022.
//
/*
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
6 is the maximum number.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1,num2,*ptr1=&num1,*ptr2=&num2;


    printf("enter your num");
    scanf("%d", &num1);

    printf("enter your num");
    scanf("%d", &num2);



    if (*ptr1 > *ptr2)
    {
        printf("the greastest number is = %d", *ptr1);
    }
    else
        printf("the greastest number is = %d", *ptr2);
}



