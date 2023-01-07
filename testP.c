//
// Created by mathe on 1/6/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int Exit()
{
    printf("Exit");
    return 1;
}


void display()
{
    printf("Enter 0 To List Saved Passwords           | ");
    printf("Enter 1 To Decrpypt Passwords With key    |\n");
    printf("Enter 2 To Encrypt Passwords With key     | ");
    printf("Enter 3 To Manage Saved Passwords & Keys  |\n");
    printf("Enter 4 To Create Key                     | ");
    printf("Enter 5 To Exit                           | ");
}


int main()
{
    display();
    Exit();
}

