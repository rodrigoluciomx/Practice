/*

Scan an array of 10 numbers and store them in the variable 'main'

Now, the odd numbers of the 'main' array should be added to a new array 'oddss'
and even numbers to be added to another array, 'evens'

Extra: I'm going to use dynamic arrays, to get any amount of numbers from the
user (? it is useful?)

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *items;
  size_t count;
  size_t capacity;

} Numbers;

#define da_appends(xs, x)                                                      \
  do {                                                                         \
    if (xs.count >= xs.capacity) {                                             \
      xs.capacity = 256;                                                       \
    } else                                                                     \
      xs.capacity *= 2;                                                        \
    {                                                                          \
      xs.items = realloc(xs.items, xs.capacity * sizeof(*xs.items));           \
    }                                                                          \
    xs.items[xs.count++] = x;                                                  \
  } while (0)

int main(void) {
  unsigned int numbers[10], evens[10], odds[10];
  int i;
  int m = 0, k = 0;

  printf("Please, enter 10 numbers: \n");
  for (i = 0; i < 10; ++i) {
    scanf("%d", &numbers[i]);
  }

  printf("\n Scanning is complete\n");

  for (i = 0; i < 10; ++i) {
    if (numbers[i] % 2 == 0) {
      evens[k] = numbers[i];
      k += 1;
    } else {
      odds[m] = numbers[i];
      m += 1;
    }
  }

  printf("\n Sorting is complete \n");

  printf("\nEven array is:\n");
  for (i = 0; i < k; ++i) {
    printf(" %d", evens[i]);
  }

  printf("\nsOdd array is:\n");
  for (i = 0; i < m; ++i) {
    printf(" %d", odds[i]);
  }

  printf("\n");

  return 0;
}