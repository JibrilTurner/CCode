/*
 Created by mathe on 12/31/2022.

 *  Pointer : Show the basic declaration of pointer :
-------------------------------------------------------
 Here is m=10, n and o are two integer variable and *z is an integer

 z stores the address of m  = 0x7ffd40630d44

 *z stores the value of m = 10

 &m is the address of m = 0x7ffd40630d44

 &n stores the address of n = 0x7ffd40630d48

 &o  stores the address of o = 0x7ffd40630d4c

 &z stores the address of z = 0x7ffd40630d50
 */


#include <stdio.h>
#include <stdlib.h>


int main(){
    int m = 10;
    int *z = &m;
    int n;
    int o;
    int* ptr;

    printf("z stores the address of m= %p\n", z);
    printf("*z stores the value of m = %d \n", *z);
    printf("*m is the address of m = %p \n", &m);
    printf("&n stores the address of z = %p \n", &n);
    printf("&o stores the address of o = %p \n", &o);
    printf("&z stores the address of z = %p \n", &z);

    return 0;
}