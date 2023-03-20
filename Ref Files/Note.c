//
// Created by mathe on 12/23/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <intrin.h>


struct user
{
    char name[25];
    char password[25];
    int total;
    int attack;
};



int password_checker(char password[])
{
    char passwordkey[25] = "a";  // declaration of char array
    int value; int b;

    do
    {
        printf("Enter_password. ");
        scanf("%s", password);

        value=strcmp(passwordkey , password);//when comparing strings

        if(value==0)
        {
            printf("\nPassword Correct\n");
            printf("Welcome to the Bank Of Jibril\n");
            b = 1;
        }
        else
        {
            printf("Re-Enter Password \n \n ");
            b = 0;
        }
    }
    while(value != 0);
    return b ;

}






int username_checker(char username[])
{
    char usernamekey[50] = "a";  // declaration of char array
    int value; int a;

    do
    {
        printf("Enter_username. ");
        scanf("%s", username);

        value=strcmp(usernamekey , username);//when comparing strings

        if(value==0)
        {
            printf("\nPassword Correct\n");
            printf("Welcome to the Bank Of Jibril\n");
            a = 1;
        }
        else
        {
            printf("Re-Enter Username \n \n ");
            a = 0;
        }
    }
    while(value != 0);
    return a ;

}





int sqaure(int num)
{
    return num * num;
}



int programopenandclose(char userexit_test[])
{
    char exitcondition[50] = "0";  // declaration of char array
    int value; int a; int userinput;

    do
    {

        printf("\n#######################################################");
        printf("\n##                                                   ##");
        printf("\n##                                                   ##");
        printf("\n##                 0.deposit                         ##");
        printf("\n##                 1.withdrawl                       ##");
        printf("\n##                 2.show_balance                    ##");
        printf("\n##                 3.info                            ##");
        printf("\n##                 4.exit                            ##");
        printf("\n##                                                   ##");
        printf("\n##                                                   ##");
        printf("\n##                                                   ##");
        printf("\n#######################################################");
        scanf("%s", userexit_test);

        char char_choice[3];
        int int_choice = 0;

        scanf("%s", char_choice);
        int_choice = atoi(char_choice);

        switch (int_choice)
        {
            case 1:
                printf("case1");
                break;
            case 2:
                printf("case1");
                break;
            case 3:
                printf("case1");
                break;
            case 4:
                // Not yet used.
                break;
            case 5:
                printf("case1");
                break;
            case 6:
                // Not yet used.
                break;
            case 8:
                printf("case1");
                break;
            case 9:
                printf("case1");
                break;
            default:printf("Wrong choice. Enter Again");
                break;
        }
    }while(int_choice !=99);
}


int main()
{
    /*
    struct user user1;

    char password[25];
    char username[30];

    strcpy(user1.name, username);
    int ansa = username_checker(username);

    strcpy(user1.password, password);
    int ansb = password_checker(password);
*/



    int userexit_test;
    int ansa = programopenandclose(userexit_test);
    return 0;
}