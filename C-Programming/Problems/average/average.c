/* Compute a better average */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  double x;
  double avg = 0.0;
  double navg;
  double sum = 0.0;
  FILE *exampleData = fopen("data.txt", "r");

  if (exampleData != NULL) {
    while (fscanf(exampleData, "%lf", &x) == 1) {
      printf("Numero leído: %lf\n", x);
    }
  } else {
    printf("it didn't work");
  }

  printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n", "Count", "Item", "Average",
         "Naive avg", "____", "____", "____", "____");

  /*
  for (i = 1;; ++i) {
     avg += (x - avg) / i;
     sum += x;
     navg = sum / i;
     printf("%5d%17e%17e%17e\n", i, x, avg, navg);
 }
 */
  return 0;
}