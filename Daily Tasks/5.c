/*
    5.  Create a program which gets an integer as input and reverses it.
        Use only arithmetic operations. For example: 12345 -> 54321.
*/

#include <stdio.h>

int main()
{
    int startingPoint, inputNum, remainderNum;
    int reversePoint = 0;

    printf("Enter integer number: ");
    scanf("%d", &startingPoint);
    inputNum = startingPoint;

    while (inputNum != 0){
        remainderNum = inputNum % 10;
        reversePoint = reversePoint * 10 + remainderNum;
        inputNum /= 10;
    }
    printf("Original Number = %d\n", startingPoint);
    printf("Reversed Number = %d", reversePoint);

    return 0;
}
