/*
    15. Create a function called reverse() that has a string parameter. The function reverses the characters of the string locally.
*/

#include <stdio.h>
#include <string.h>

void reverse(char *str1)
{
    int i, length, temp;
    length = strlen(str1);

    for (i = 0; i < length/2; i++)
    {
        temp = str1[i];
        str1[i] = str1[length - i - 1];
        str1[length - i - 1] = temp;
    }
}

int main()
{
    char str[50];
    printf (" Enter the string: ");
    gets(str);

    printf (" \n Before reversing the string: %s \n", str);

    reverse(str);
    printf (" After reversing the string: %s", str);
}
