/*

Conversion of Fahrenheit to Celsius
C = (F-32)/1.8
by Rodrigo Lucio
April 30,2026

*/

#include <stdio.h>

int main(void) {
  int fahrenheit, celsius;
  printf("Please, enter the fahrenheit temperature: ");
  scanf("%d", &fahrenheit);
  // conversion
  celsius = (fahrenheit - 32) / 1.8;
  printf("\n %d in fahrenheit are %d in celsius.\n", fahrenheit, celsius);
  return 0;
}