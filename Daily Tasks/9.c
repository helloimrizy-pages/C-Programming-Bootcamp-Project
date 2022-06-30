/*
    9.  Guessing game: Read a number until it's equal to a chosen number (first it can be a hard-coded constant or #define, or you can check rand() later).
        In case of wrong guessing help the user by printing whether the guessed number is to small or too big.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void guess(int rangeOfInput)
{
    int number, userInput, chanceOfGuessing = 0;

    number = rand() % rangeOfInput;

    printf("Guess a number between 1 and %d\n", rangeOfInput);

    do {

        if (chanceOfGuessing > 9) {
            printf("\nYou Loose!\n");
            break;
        }

        scanf("%d", &userInput);

        if (userInput > number)

        {
            printf("Lower!\n");
            chanceOfGuessing++;
        }

        else if (number > userInput)

        {
            printf("Higher!\n");
            chanceOfGuessing++;
        }

        else
            printf("You guessed the number in %d attempts!\n", chanceOfGuessing);

    } while (userInput != number);
}

int main()
{
    int rangeOfInput = 100;
    guess(rangeOfInput);
    return 0;
}
