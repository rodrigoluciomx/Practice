/*

Sine calculator
by Rodrigo Lucio
07/05/2026

Description:
Prompts the user for a real number in the range of (0,1),
validates the  input, and computes its sine.
The input is treated as a value in radians.


*/

#include <math.h>
#include <stdio.h>

#define PI 3.14159

/*
Reads and validates a double from the user
*/
double get_randomNum(void);

int main(void) {
  double randomNum, result;
  randomNum = get_randomNum(); // get validated value from user
  result = sin(randomNum);     // computing sine in radians
  printf("randNum: %lf\n", randomNum);
  printf("The sine of %lf is %lf\n", randomNum, result);
  return 0;
}

double get_randomNum(void) {
  double num;
  /*
  Repeatedly prompts the user until
  a value strictly between 0 an 1 is entered
  */
  do {
    printf("Enter a value between 0 and 1(non inclusive): ");
    scanf("%lf", &num);

    // Rejects the value outside the range
    if (num <= 0.0 || num >= 1.0) {
      printf("Invalid input. Please try again. \n");
    }
  } while (num < 0.0 || num >= 1.0);
  return num;
}