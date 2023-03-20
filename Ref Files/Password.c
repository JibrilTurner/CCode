#include <stdlib.h>
#include <stdio.h>

int main()
{
    int passwordkey = 42;
    int password;
    int attempts = 1;

    printf("Attempt %d: Enter password:", attempts);
    scanf("%d", &password);
    attempts++;

    while(passwordkey != password && attempts <= 3 )
    {
        printf("Attempt %d: Enter password: ", attempts);
        scanf("%d", &password);
        attempts++;

    }
    if (attempts > 3)
    printf("Your password is wrong go to hell.");
    else
        printf("Your password is right have a nice day. ");

    return 0;
}