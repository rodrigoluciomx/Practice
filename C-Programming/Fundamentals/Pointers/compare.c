#include <stdio.h>

int main(void) {

  char *s = "BYE!";
  char *t = "HI!";

  printf("%p\n", &s);
  printf("%p\n", &t);

  if (s == t) {
    printf("Same %p\n", &s);
  } else {
    printf("Different %p\n", &t);
  }

  return 0;
}