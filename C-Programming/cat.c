#include <stdio.h>

int main(void) {
  int n;
  do {
    printf("Enter a number: ");
    scanf("%d", &n);
  } while (n < 0);

  for (int i = 0; i < 3; i++) {
    printf("meow\n");
  }
}