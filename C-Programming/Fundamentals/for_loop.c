/*

Find out factorial of a scanned number
e.g. factorial of 6 = 1 x 2 x 3 x 4 x 5 x 6

*/

#include <stdio.h>

int main(void) {
  int a, fact, i;
  fact = 1;

  printf("\nPlease enter a number for which Factorial is to be calculated: ");
  scanf("%d", &a);
  printf("\n");

  for (i = 1; i <= a; i++) {
    fact = fact * i;
  }

  printf("The factorial of %d is: %d\n\n", a, fact);

  return 0;
}