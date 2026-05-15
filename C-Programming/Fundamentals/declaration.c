/*
Fundamental Types Declaration and Assigment
*/

#include <stdio.h>

int main() {
  int a = 5, b = 7, c = 6; // declare and assign
  double average = 0.0;    // good pratice

  printf("a = %d, b = %d, c = %d\n", a, b, c);
  average = (a + b + c) / 3.0; // conversion if 3
  printf("average = %lf\n", average);
  return 0;
}