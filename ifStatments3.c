#include <stdio.h>
#include <stdlib.h>

int max(int num1,int num2,int num3) 
{
    int result; 
    if(num1 >= num2 && num1 >= num3) // false
    {
     result = num1;
    }
    else if(num2 >= num1 &&  num2 >= num3) // false 
    {
     result = num2; 
    }
    else
    {
     result = num3;
    }
    return result; 
}

int main()
{
    if(6 > 2 || 2 > 5) 
    {
        printf("True");
    }
    else 
    {
        printf("false");
    }
    return 0;
}