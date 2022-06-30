/*
    14. Write a program that prompts the user for a text up to 20 characters long and makes a copy of it.
        Make sure that the copy uses only the amount of memory that is absolutely necessary.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    int i;

    for(i=0;str[i] !='\0';i++);

    char * copy = NULL;
    copy = (char *) malloc(i*sizeof(char));
    strcpy(copy, str);

    puts(copy);

}
