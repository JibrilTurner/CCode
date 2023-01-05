//
// Created by mathe on 1/1/2023.
//

#include <stdio.h>
#include <math.h>// required for math

int main() {
    char a[] = "wow";
    char b[] = "i feel stupid";

    // using the %zu format specifier to print size_t
    printf("Length of string a = %ld \n",strlen(a));
    printf("Length of string b = %ld \n",strlen(b));

    return 0;
}
