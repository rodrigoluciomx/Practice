/*

Char in C

*/

#include <stdio.h>

int main() {
  char c;
  printf("\nEnter a character: ");
  scanf("%c", &c);

  printf("\n\n Character scanned ...\n\n");

  printf("%c in ASCII is : %d\n", c, c);
  printf("%c the character is: %c\n", c, c);
  printf("Three consecutive chars are: %c%c%c \n", c, c + 1, c + 2);

  return 0;
}