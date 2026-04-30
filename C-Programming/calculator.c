#include <stdio.h>

int get_int(char *message);

int main(void) {

  int x = get_int("What is x?: ");
  int y = get_int("What is y?: ");

  int sum = x + y;

  printf("The answer is: %i\n", sum);
}

int get_int(char *message) {
  int number;
  printf("%s", message);
  scanf("%d", &number);
  return number;
}