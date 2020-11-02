#include <stdio.h>
#include <stdlib.h>

int main (void) {

    //  Write a C program to get the C version you are using
    switch (__STDC_VERSION__) {
        case 199901L:
            printf("We are using C99!\n");
            break ;

        case 201112L:
            printf("We are using C11!\n");
            break ;
    
        default:
            printf("We are using C90!\n");
    }

    return EXIT_SUCCESS;
}