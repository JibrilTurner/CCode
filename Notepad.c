#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
};
struct student record; // Global declaration of structure


int username_checker(char username[])
{
    char usernamekey[50] = "a";  // declaration of char array
    int value; int a;
    strcpy(record.name, usernamekey);

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




int programopenandclose(int userexit_test)
{
    int exitcondition = 0;  // declaration of char array
    int value; int a;

    do
    {

        printf("\n#######################################################");
        printf("\n##                                                   ##");
        printf("\n##                  Welcome %s                        ##",  record.name   );
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
        printf("\n##                                                   ##");
        printf("\n#######################################################");

        scanf("%d", &userexit_test);


        if(userexit_test == exitcondition) // false
        {

            printf("deposit");

        }
        else if(userexit_test == 1) // false
        {
            printf("test 1");
        }
        else if(userexit_test == 2) // false
        {
            printf("test 2");
        }
        else if(userexit_test == 3) // false
        {
            printf("test 3\n");

            printf(" Name is: %s \n", record.name);

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

    username_checker(username);
   programopenandclose(choice);








    return 0;
}

