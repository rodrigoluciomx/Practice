#include <stdio.h>

int main(void) {

  int n;
  printf("n: ");
  scanf("%i", &n);
  printf("n: %d\n\n", n);

  char *s; // address of some string with garbage value
  printf("s: ");
  scanf("%s", s);
  printf("s: %s\n", s);
}