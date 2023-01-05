//
// Created by mathe on 12/22/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Player
{
    char name[25];
    char classs[25];
    double level;
    int attack;
};

int main()
{
    struct Player tplayer1;
    tplayer1.level = 26.5;
    tplayer1.attack = 35;
    strcpy(tplayer1.name, "jeff");
    strcpy(tplayer1.classs, "mage");
    printf("Your level %lf", tplayer1.level );
    return 0;
}

