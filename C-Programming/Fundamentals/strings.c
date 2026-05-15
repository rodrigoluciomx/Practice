/*

a string a an array of characters
which ends with letter 0 (null terminator)

*/

#include <stdio.h>  // not always available in embedded compilers
#include <string.h> // is always available  in embedded compilers

int main(void) {

  // char a[10] = {'W', 'e', 'l', ' ', 'c', 'o', 'm', 'e'};
  /*
  char a[20] = "Welcome to C coding\n";
  printf("\n%s\n", a);
  */

  // reading a string like in embedded
  int i;
  char my[20];

  for (i = 0; i < 10; i++) {
    scanf("%c", &my[i]);
  }

  printf("\nLet's print the string: ");
  printf("%s\n\n", my);

  return 0;
}