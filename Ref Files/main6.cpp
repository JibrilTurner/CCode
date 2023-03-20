
#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;

    printf("1 2 3 4: ");
    scanf("%d", &input);

    if (input == 1)
    {
        int age;
        printf("what is your age: ");
        scanf("%d", &age);
        printf("you are %d years old", age);

    }
    else if (input == 2)
    {
        char name[15];
        printf("what is your name: ");
        scanf("%s", name);
        printf("you name is %s", name);
    }
    else if (input == 3)
    {
        double gpa;
        printf("enter your gpa: ");
        scanf("%lf", &gpa);
        printf("your gpa is %f", gpa);
    }
    else // try in isolation
    {
        char name[20];
        printf("enter your name: ");
        fgets(name, 20, stdin);
        printf("your name is %s", name);
    }

    return 0;
}
