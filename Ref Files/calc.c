#include <stdio.h>
int main()
{
    int num_one;
    int num_two;
    int num_three;

    printf("enter num one " );
    scanf("%d", &num_one);

    printf("enter num two " );
    scanf("%d", &num_two);

    printf("enter num opp " );
    scanf("%d", &num_three);

    if (num_three == 1)
    printf("%d ", num_one + num_two);
    
    else if (num_three == 2)
    printf("%d",num_one - num_two);
    
    else if (num_two < num_one)
    printf("%d",num_two - num_one);
    
    return 0;
}