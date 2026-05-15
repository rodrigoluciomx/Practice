#include <stdio.h>

int main(void) {
  int scores[1024];
  for (int i = 0; i < 1024; i++) {
    printf("%d\n", scores[i]);
  }

  printf("\nExplanation: The program print random numbers\n");
  printf("because we didn't initialize the values on the array.\n");
}