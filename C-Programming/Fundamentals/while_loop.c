#include <stdio.h>

int main(void) {

  int i = 0;

  // evaluate before executing
  while (i < 10) {
    printf("\nThis is my execution, i = %d\n", i);
    i++;
  }

  // execute at least one, the evaluate
  i = 50;
  do {
    printf("\nThis is my execution, i = %d\n", i);
  } while (i < 10);

  return 0;
}