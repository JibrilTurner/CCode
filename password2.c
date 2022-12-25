//
// Created by mathe on 12/25/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <intrin.h>
int main () {

    char password[25];
    char passwordkey[25] = "yes";  // declaration of char array
    int value;

    do
    {
        printf("Enter password: ");
        scanf("%s", password);

        value = strcmp(passwordkey, password);//when comparing strings

        if (value == 0)
        {
            printf("Welcome to the Hospital Management system \n");
        }
        else
        {
            printf("Re-Enter Password \n");
        }
    }
    while (value != 0);
    return 0;
}