/*
    13. Create a function, declare and define a static variable in it! Increase the value of the variable and print it out.
        Call the function in the main() several times! What's happening?
*/

#include<stdio.h>

int static_variableTest()
{
  static int count = 5;
  count++;
  return count;
}

int main()
{
  printf("%d\n", static_variableTest());
  printf("%d\n", static_variableTest());
  printf("%d\n", static_variableTest());
  printf("%d\n", static_variableTest());
  printf("%d", static_variableTest());

  return 0;
}
