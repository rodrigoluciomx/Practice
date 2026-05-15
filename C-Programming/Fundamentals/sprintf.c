#include <stdio.h>

int main(void) {
  /*

  In embedded systems we dont have access to printf or scanf
  so we use sprintf() instead

  */

  int a;
  float b;
  char arr[20];

  b = 31.296;
  a = 71;

  // embedded platform
  // %1.2f tells how many digits after the point
  sprintf(arr, "H: %d, T:%1.2f", a, b);

  // normal c
  puts(arr);

  return 0;
}