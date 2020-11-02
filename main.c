#include <stdio.h>
#include <stdlib.h>

int main (void) {

    //  Write a C program to get the C version you are using
    
    if (!__STDC_VERSION__) {
        printf("We are using C90\n");
    } else if (__STDC_VERSION__ == 199901L) {
        printf("We are using C99\n");
    } else if (__STDC_VERSION__ == 201112L) {
        printf("We are using C11\n");
    }

    return EXIT_SUCCESS;
}