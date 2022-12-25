#include <stdio.h>
#include <stdlib.h>

int sqaure(int num);// if you want to have the main function on top rather then below the sqared funtion 

int main()
    {
        printf("Answer: %d\n" , sqaure(3.0));
        return 0; 
    }

int sqaure(int num)
{
    return num * num; 
}
 

