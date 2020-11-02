#include <stdio.h>
#include <stdlib.h>

int main (void) {

    //  Write a C program to print a block F using hash (#), where the F has a height of six characters and width of five and four characters. And also to print a big 'C'
    
    printf("%-*s\n", 8, "######");
    printf("%-*s\n%-*s\n", 8, "#", 8, "#");
    printf("%-*s\n", 8, "#####");
    printf("%-*s\n%-*s\n%-*s\n", 8, "#", 8, "#", 8, "#");

    printf("\n  ######\n ##\t\b##\n#\n#\n#\n#\n ##\t\b##\n  ######\n");

    return EXIT_SUCCESS;
}