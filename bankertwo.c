//
// Created by mathe on 12/26/2022.
//
//
// Created by mathe on 12/23/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <intrin.h>
#include <conio.h>
#include <stdio.h>
#define MAX 1



struct user
{
    char name[20];
    char password[20];

};

struct user arr_user[MAX];


char password_register(char password[])
{
    int i;

    for(i = 0; i < MAX; i++ )
    {
        printf("\nEnter Password of User%d\n\n", i + 1);

        printf("Enter Password: ");
        scanf("%s", arr_user[i].password);
    }

    printf("Password\n");

    for(i = 0; i < MAX; i++ )
    {
        printf("%s\n",arr_user[i].password);
        printf("%s\n",arr_user[0].password);

    }


    // signal to operating system program ran fine
    return 0;
}



char password_checker(char password[])
{
    char passworkedkey[50] = "a";  // declaration of char array
    int value; int a;
    strcpy(arr_user[0].password, passworkedkey);


    do
    {
        printf("Enter_password. ");
        scanf("%s", password);

        value=strcmp(passworkedkey , password);//when comparing strings

        if(value==0)
        {
            printf("\nPassword_correct\n");
            printf("Welcome to the Bank Of Jibril\n");
            a = 1;
        }
        else
        {
            printf("Re-Enter Password \n \n ");
            a = 0;
        }
    }
    while(value != 0);
    return a ;

}




int main()
{

    char password[25];
    char rpassword[25];

    char username[30];
    int choice;
    int loginchoice;
    password_register(rpassword);

    password_checker(password);
   // username_checker(username);


    return 0;
}