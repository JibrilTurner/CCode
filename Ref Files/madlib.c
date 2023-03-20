//
// Created by mathe on 12/15/2022.
//
//
// Created by mathe on 12/15/2022.
//
#include <stdio.h>
#include <math.h>// required for math

int main() {

    char favPerson[20];
    printf("Name someone who you think is cute: ");
    scanf("%s", favPerson);

    char theDream[20];
    printf("Describe your dream in one word:  ");
    scanf("%s", theDream);

    printf("%s also thinks your cute\n" ,favPerson);
    printf("you had a %s dream" ,theDream);

    return 0;
}
