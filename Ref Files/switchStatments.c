//
// Created by mathe on 12/22/2022.
//

#include <stdlib.h>
#include <stdio.h>

int main()
{
    char grade = 'a';

    switch(grade)
    {
        case 'a' :
            printf("you did great!");
            break;

        case 'b' :
            printf("you did ok");
            break;

        case 'c' :
            printf("you did poorly");
            break;

        case 'f' :
            printf("you did failed");
            break;
        default:
            printf("invaid grade");
    }







    return  0;
}