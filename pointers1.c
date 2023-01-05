//
// Created by mathe on 12/31/2022.
//
#include <stdio.h>
int main()
{
    int arr[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("&x[%d] = %p\n", i, &arr[i]);
    }
printf("Address of array x: %p", arr);

return 0;
}