/*

Advantages of pointers: 
- Less time in program execution
- Working on the original variables
- With the help of pointers, we can create data structures (linked-list, stack, queue)
- Returning more than one values from functions
- Searching and sorting large data very easily
- Dynamically memory allocation

*/

#include <stdio.h>

int main(void) {

  int n = 50;

  // iniatializing a variable p with the address in memory of n 
  int *p = &n;

  char *s = "HI!";
  /*

   using "& + <name of the variable"
   literally means: hey computer
   give me the address in memory of
   this variable

  */
  printf("\nThe address in memory of n is: %p\n", &n);
  printf("The address in memory of n, using p: %p\n", p);
  
  /*
   *p means (in this case): de-reference operator,
   which means "go to the address in p and get the value"
   or "value pointed by *p" or "value at address ... "
   so, n & *p are the same!!, they have the same value.
  */
  printf("\nValue of n is: %d\n", n);
  printf("Value pointed by p: %i\n", *p);

  printf("\n --- Changing the value of n using *p ---\n");

  // the value pointed by p should now become 100
  *p = 100;
  printf("\nThe new value of n is: %d\n", n);


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