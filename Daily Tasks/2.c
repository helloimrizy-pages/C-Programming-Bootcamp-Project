/*
    2.  Create a program which greets your name. Store your name in a variable.
        Use the type char[] and formatting character %s.
*/

#include<stdio.h>

int main(){

    char yourName[50];

    printf("Hi, what is your name?\n");
    scanf("%s", &yourName);

    printf("Nice to meet you, %s.", yourName);
    return 0;
}
