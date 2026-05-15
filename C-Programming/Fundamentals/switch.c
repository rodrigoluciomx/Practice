#include <stdio.h>

int main(void) {
  int a1, a2, result;
  char op;
  printf("Enter first number: ");
  scanf("%d", &a1);
  printf("\n");

  printf("Enter second number: ");
  scanf("%d", &a2);
  printf("\n");

  printf("Enter the expected operation (+ - / *): ");
  scanf(" %c", &op);
  printf("\n");

  switch (op) {
  case '+':
    result = a1 + a2;
    printf("Addition of %d and %d = %d\n", a1, a2, result);
    break;

  case '-':
    result = a1 - a2;
    printf("Substraction of %d and %d = %d\n", a1, a2, result);
    break;

  case '/':
    result = a1 / a2;
    printf("Divison of %d and %d = %d\n", a1, a2, result);
    break;

  case '*':
    result = a1 * a2;
    printf("Multiplication of %d and %d = %d\n", a1, a2, result);
    break;

  default:
    printf("Invalid operation\n\n");
    break;
  }

  return 0;
}