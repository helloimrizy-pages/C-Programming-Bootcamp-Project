/*
    8.  Write a function that is given two strings as parameters and returns the concatenation of these strings
        (you are not allowed to use strcat() or similar functions: work low level with loops (while/for)).
*/

#include <stdio.h>

int main()
{
    char firstInput[200], secondInput[200];
    int i = 0, j = 0;

    char*firstInputP;
    char*secondInputP;

    firstInputP = firstInput;
    secondInputP = secondInput;

    printf("Please input a string: ");
    scanf("%s", firstInput);

    printf("Please input one more string: ");
    scanf("%s", secondInput);

    while(firstInput[i] != '\0')
    {
        ++firstInputP;
        i++;
    }

    while(secondInput[j] != '\0')
    {
        *firstInputP = *secondInputP;
        firstInputP++;
        secondInputP++;
        j++;
    }

    printf("You inputed: %s", firstInput);

    return 0;

}
