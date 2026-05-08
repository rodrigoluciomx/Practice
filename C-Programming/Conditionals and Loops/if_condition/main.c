/*

At the end of the file are comments for each explanation,
use it to learn and see different case uses.

*/

#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("\n Enter first number: ");
  scanf("%d", &a);

  printf("\n Enter second number: ");
  scanf("%d", &b);

  printf("\n Enter third number: ");
  scanf("%d", &c);
}

/*

Simple if
if (a > b) {
  printf("\n a is greater than b \n");
}

if (b > a) {
  printf("\n b is greater than a \n\n");
}

*/

/*

Nested if's

if (a > b) {
  if (a > c) {
    printf("\n a is largest \n");
  }
}

Or a simplified way

if (a > b && a > c) {
  printf("\n a is largest \n");
}

*/

/*

 Combining if with multiple logic operators

if ((a > b || a > 100) && a > c) {
  printf("\n we did it!! \n");
} else {
  printf("\n We didn't :( \n\n");
}

*/