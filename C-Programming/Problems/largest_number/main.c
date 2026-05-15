/*

Scan 6 numbers and store in a array
and then print the largest one out of them

*/

#include <stdio.h>

int main(void) {
  unsigned largest;
  int i = 0;
  unsigned int arr[6];

  // Reading the numbers from the user
  printf("Please, enter 6 different numbers: \n");
  for (i = 0; i < 6; i++) {
    scanf("%d", &arr[i]);
  }

  // using the first number as the actual largest
  largest = arr[0];

  // Comparing the numbers from the array
  for (i = 0; i < 6; i++) {
    if (arr[i] > largest) { // check if the number is largest than the actual
      largest = arr[i];     // re-assigning the new largest number
    } else {
      continue;
    }
  }

  printf("\n -------------------------------------- \n");

  printf("\n You entered the numbers:\n");

  for (i = 0; i < 6; i++) {
    printf("%d\n", arr[i]);
  }

  printf("\n And the largest number is: %d\n\n", largest);

  return 0;
}
