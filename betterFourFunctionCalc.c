//////////////////////////////////////////
//Created by jibril on 12/19/2022       //
//Your a Fucking Muppet for reading this//
//////////////////////////////////////////

#include <stdio.h>
#include <string.h>

  int add(int num1, int num2)
{
    return num1 + num2; 
}
  int sub(int num1, int num2)
{ 
    return num1 - num2; 
} 
   int mult(int num1, int num2)
{ 
    return num1 * num2; 
} 
   int div(int num1, int num2)
{ 
    return num1 / num2; 
} 

 int main()
{

    char Oop[1]; int a; int b;
    printf("Format Num1 Oprator Num2\nOprator are + - / *\nEnter Here:");
    scanf("%d %c %d", &a, &Oop, &b);

    if(strcmp(Oop, "+") == 0 )      
    {
      printf("Answer: %d\n" , add(a, b));
    }
      
    else if (strcmp(Oop, "-") == 0)
    {
      printf("Answer: %d\n" , sub(a, b));
    }
      
    else if (strcmp(Oop, "/") == 0)
    {
      printf("Answer: %d\n" , div(a, b));
    }
      
    else
    {
      printf("Answer: %d\n" , mult(a, b));     
    }
    
    return 0;
  
}