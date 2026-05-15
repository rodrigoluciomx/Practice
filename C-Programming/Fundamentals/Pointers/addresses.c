#include <stdio.h>

int main(void) {

  int n = 50;
  char *s = "HI!";

  // iniatializing a variable p with the address in memory of n
  int *p = &n;

  /*

   using "& + <name of the variable"
   literally means: hey computer
   give me the address in memory of
   this variable

  */
  printf("The adress in memory of n is: %p\n", p);

  /*
   printing n using p
   *p means (in this case): de-reference operator,
   which means "go to the address in p"
  */
  printf("Printing n using p: %i\n", *p);

  /*


  */
  printf("\nNow working with the string...\n");
  printf("Address of the string '%s' is %p\n", s, s);
  printf("Address of %c: %p\n", s[0], &s[0]);
  printf("Address of %c: %p\n", s[1], &s[1]);
  printf("Address of %c: %p\n", s[2], &s[2]);
  printf("Address of %i(last element): %p\n\n", s[3], &s[3]);
  return 0;
}