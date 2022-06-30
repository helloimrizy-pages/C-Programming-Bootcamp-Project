/*
    1.  Create a program which prints the area of a square and a circle.
        Read the length of square and the radius of circle from the standard input.
*/

#include<stdio.h>

int main(){
    float sideOfSquare, areaofSquare, areaofCircle, radiusOfCircle;

    printf("Hi, this program will calculate the area of a square and a circle.");
    printf("Now, let's calculate the area of a square.");
    printf("\nPlease enter the length of a side: ");

    scanf("%f", &sideOfSquare);

    areaofSquare = sideOfSquare*sideOfSquare;
    printf("The area of the square = %f", areaofSquare);

    printf("\nNext, let's calculate the area of a circle.");
    printf("\nPlease enter the radius of a circle: ");

    scanf("%f", &radiusOfCircle);

    areaofCircle = 3.14*(2*radiusOfCircle);
    printf("The area of the circle = %f", areaofCircle);

    return(0);
}
