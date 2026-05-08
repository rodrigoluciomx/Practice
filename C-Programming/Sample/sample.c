#include <stdio.h>

void print_column(int height);

int main(void) {
  int h;
  printf("Enter a number: ");
  scanf("%d", &h);
  print_column(h);
  return 0;
}

void print_column(int height) {
  for (int i = 0; i < height; i++) {
    printf("#\n");
  }
}