//
// Created by mathe on 12/22/2022.
//
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int passwordkey = 42;
    int password;
    int attempts;

    printf("Enter password: ");
    scanf("%d", &password);

    while(passwordkey != password && attempts < 2)
    {
        printf("Enter password %d: ", attempts);
        scanf("%d", &password);
        attempts++;
    }
    if (attempts >= 2)
    printf("Your password is wrong go to hell.");
    else
        printf("Your password is right have a nice day. ");


    return 0;
}