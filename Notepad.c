//
// Created by mathe on 12/26/2022.
//
//
// Created by mathe on 12/23/2022.
//
#include <stdio.h>
#include <conio.h>
#define MAX 1
#define MAX_ACCOUNTS 10



struct user
{
    char name[20];
    char password[20];
};

struct user arr_user[MAX_ACCOUNTS];


char user_register(char password[])
{

    char *filename = "test.txt";

    // open the file for writing
    FILE *fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("Error opening the file %s", filename);
        return -1;
    }

    int i;
    for(i = 0; i < MAX; i++ )
    {


        printf("\nEnter Username of User%d\n\n", i + 1);
        printf("Enter Username: ");
        scanf("%s", arr_user[i].name);
        printf("%s\n",arr_user[i].name);


        printf("\nEnter Password of User%d\n\n", i + 1);
        printf("Enter Password: ");
        scanf("%s", arr_user[i].password);
        printf("%s\n",arr_user[i].password);


        fprintf(fp, "%s\n",arr_user[i].name);
        fprintf(fp, "%s\n",arr_user[i].password);

        fclose(fp);    // close the file


    }




    return 0;
}







char password_checker(char password[])
{


    return 1 ;

}




int main()
{

    char password[25];
    char rpassword[25];

    char username[30];
    int choice;
    int loginchoice;
    user_register(rpassword);

    password_checker(password);
    // username_checker(username);


    return 0;
}