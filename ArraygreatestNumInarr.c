//
// Created by mathe on 12/31/2022.
//
#include <stdlib.h>
#include <stdio.h>

int main(){
    int arr[] = {12, 4,16, 42,54,555};

    for (int i = 1; i < 6; ++i)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    printf("Largest element = %d", arr[0]);

    return  0;
}

