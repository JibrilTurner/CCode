//
// Created by mathe on 12/31/2022.
//

#include <stdio.h>
#include <stdlib.h>


int main(){
    int arr[5];
    int i;
    int sum;
    printf("Enter your nums " );

    for(i = 0; i < 5; i++) {
        scanf("%d", arr+i);
        sum += *(arr+i);
    }
    printf("%d",sum );

    return 0;
}