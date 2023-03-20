//
// Created by mathe on 12/31/2022.
//
//
// Created by mathe on 12/31/2022.
//

#include <stdio.h>
#include <stdlib.h>


int main(){
    int x[5] = {0, 2, 3, 4, 5};
    int* ptr;

    ptr =  &x[2];

    printf("%d\n", *(ptr+1));
    printf("%d\n", *(ptr-1));
    printf("%d\n", *(ptr));

    return 0;
}