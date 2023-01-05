//
// Created by mathe on 12/26/2022.
//
//
// Created by mathe on 12/26/2022.
//
#include<stdio.h>
#include<string.h>
#define MAX 5

struct student
{
    char name[20];

};

int main()
{
    struct student arr_student[MAX];
    int i;

    for(i = 0; i < MAX; i++ )
    {
        printf("\nEnter details of student %d\n\n", i+1);

        printf("Enter name: ");
        scanf("%s", arr_student[i].name);

    }
/*
    char Testchar[25];
    printf("Enter the Newname  ");
    scanf("%s", &Testchar);

    strcpy(arr_student[2].name, Testchar );

    printf("\n");
    printf("Name\n");
*/
    for(i = 0; i < MAX; i++ )
    {
        printf("%s\n",arr_student[i].name);
    }

    // signal to operating system program ran fine
    return 0;
}