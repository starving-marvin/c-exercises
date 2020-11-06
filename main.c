#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    // Write a C program to print the following characters in a reverse way. Go to the editor
    // Test Characters: 'X', 'M', 'L' 
    
    char* string = "XML";

    for (int i = strlen(string) - 1; i >= 0; i--) {
        putchar(string[i]);
    }

    printf("\n");

    return EXIT_SUCCESS;
}