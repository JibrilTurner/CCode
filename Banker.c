//
// Created by mathe on 12/23/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <intrin.h>
#include <conio.h>
#include <stdio.h>

struct user
{
    char password[25];
    char name[25];
    int acctotal;
};
struct user user1; // Global declaration of structure

char password_checker(char password[])
{
    char passworkedkey[50] = "12345";  // declaration of char array
    int value; int a;
    strcpy(user1.password, passworkedkey);


    do
        {
            printf("Enter_password. ");
            scanf("%s", password);

            value=strcmp(passworkedkey , password);//when comparing strings

            if(value==0)
            {
                printf("\nPassword_correct\n");
                printf("\nWelcome to the Bank Of Jibril\n");
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


int username_checker(char username[])
{
    char usernamekey[50] = "test";  // declaration of char array
    int value; int a;
    strcpy(user1.name, usernamekey);

    do
    {
        printf("Enter_username. ");
        scanf("%s", username);

        value=strcmp(usernamekey , username);//when comparing strings

        if(value==0)
        {
            printf("\nUsername_correct\n");
            a = 1;
        }
        else
        {
            printf("Re_Enter_Username \n \n ");
            a = 0;
        }
    }
    while(value != 0);
    return a ;

}







int program_menu_and_close(int userexit_test)
{
    int exitcondition = 0;  // declaration of char array
    int value; int a;

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
        printf("\n#######################################################");
        printf("\n##             Enter your option                     ##");
        printf("\n#######################################################");
        scanf("%d", &userexit_test);





        if(userexit_test == exitcondition) // false
        {
            int amountD;
            printf("\ntest 1\n");
            printf("How much would you like to Deposit\n");
            scanf("%d", &amountD);
            user1.acctotal = user1.acctotal+amountD;
            printf("%d$ has_been_deposited", user1.acctotal);
        }
        else if(userexit_test == 1) // false
        {
            int amountW;
            printf("test 1\n");
            printf("How much would you like to Withdraw\n");
            scanf("%d", &amountW);

            if (user1.acctotal < amountW)
            {
                printf("\nInsufficient Funds");
            }
            else
            user1.acctotal = user1.acctotal-amountW;
            printf("%d$ has_been_withdrew", user1.acctotal);
        }
        else if(userexit_test == 2) // false
        {
            printf("\ntest 2\n");
            printf("Your_Balance_is_%d$", user1.acctotal);
        }
        else if(userexit_test == 3) // false
        {
            printf("\nThis is info\n");
            printf("The Name Registered is: %s \n", user1.name);
            printf("The Password Registered: %s \n", user1.password);
        }
        else
        {
            printf("test 4");
            value = 0;
        }
    }
    while(value != 0);
    return a ;

}

int main()
{

    char password[25];
    char username[30];
    int choice;
    int loginchoice;

    username_checker(username);
    password_checker(password);
    program_menu_and_close(choice);

        return 0;
    }