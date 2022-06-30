/*
    6.  Check whether a given number is palindrome. Use only arithmetic operations in the solution.
        For example: 12321 is a palindrome but 12345 isn't.
*/

#include<stdio.h>

int main() {

    int n, r, sum = 0, temp;
    temp = n;

    printf("This program will check whether the entered number is palindrome.\n");
    printf("Enter the number = ");
    scanf("%d", &n);

    while(n > 0)  {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    if(temp == sum)
        printf("\nThe entered number IS palindrome.\n");
    else
        printf("\nThe entered number IS NOT palindrome.\n");

    return 0;
}
