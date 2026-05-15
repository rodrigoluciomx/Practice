#include <stdio.h>

int main(void) {
  unsigned int a[10] = {101, 51, 71, 99, 85, 76};

  printf("\n -------------------\n");
  printf("Enter 5 numbers, one after the other:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }

  printf("\n -------------------\n");

  for (int i = 0; i < 5; i++) {
    printf("%d\n", a[i]);
  }

  printf("\n -------------------\n");
  return 0;
}
