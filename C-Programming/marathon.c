/*
The distance of a marathon in kilometers
by Rodrigo Lucio
April 30, 2026
*/

#include <stdio.h>

int main(void) {
  int miles = 26, yards = 385;
  double kilometers;

  kilometers = 1.6909 * (miles + yards / 1760.0);
  printf("\nA marathon is %lf kilometers. \n\n", kilometers);
  return 0;
}