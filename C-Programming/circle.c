/*
Circle and Area

*/

#include <stdio.h>

#define PI 3.14159

int main(void) {
  double area = 0.0, radius = 0.0; // area in km
  printf("Enter radius: ");
  scanf("%lf", &radius);
  area = PI * radius * radius; // classic formula
  printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
  return 0;
}