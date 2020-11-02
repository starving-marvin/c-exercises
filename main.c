#include <stdio.h>
#include <stdlib.h>

int main (void) {

    //  Write a C program to print your name, date of birth, and mobile number (Exercise 1)
    char* name_label = "Name";
    char* dob_label = "DOB";
    char* tel_label = "Mobile";
    
    char* name = "Jack the Ripper";
    char* dob = "August 17 1888";
    char* tel = "44-6668889";

    printf("%-7s : %s\n%-7s : %s\n%-7s : %s\n", name_label, name, dob_label, dob, tel_label, tel);

    return EXIT_SUCCESS;
}