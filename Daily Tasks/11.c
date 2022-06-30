/*
    11. Create a function which swaps the values of two variables.
*/

#include<stdio.h>
int main() {

  int firstVal, secondVal, temp;

  firstVal = secondVal;
  temp = firstVal;
  secondVal = temp;

  printf("Enter first value = ");
  scanf("%d", &firstVal);

  printf("Enter second value = ");
  scanf("%d", &secondVal);

  printf("\nSwapping the value ...\n");

  printf("\nThe first value = %d\n", firstVal);
  printf("The second value = %d", secondVal);

  return 0;
}
