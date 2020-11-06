#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

float area(float a, float b);

float per(float a, float b);

int main (void) {

    // Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches, and width of 5 inches
    float inch = 7;
    float width = 5;

    printf("Area:\t%.1f\nPerimeter:\t%.1f\n", area(inch, width), per(inch, width));

    return EXIT_SUCCESS;
}

float area(float a, float b)
{   
    float area = a * b;
    assert(area >= 0);
    return area;
}

float per(float a, float b)
{
    float per = 2 * (a + b);
    assert(per >= 0);
    return per;
}