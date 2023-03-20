#include <stdio.h>
#include <intrin.h>
//made by jibril



void makeGrid()
{
    int i; 
    for(i = 0; i<10; i++ ){
         printf("-------------\n\n\n");
    }
}



int programopenandclose(char userexit_test[])
{
    char exitcondition[50] = "0";  // declaration of char array
    int value; int a;
    do
    {
        printf("enter 0 to exit\nenter 1 to loop");
        scanf("%s", userexit_test);
        value=strcmp(exitcondition , userexit_test);//when comparing strings
        if(value==0)
        {
            printf("\nExiting\n");
            a = 1;
        }
        else
        {
            makeGrid();
            printf("Press 1 To Exit\n \n ");
            a = 0;
        }
    }
    while(value != 0);
    return a ;
}
int main() {
    char userexit_test[30];
    int ansa = programopenandclose(userexit_test);
    return 0;
}