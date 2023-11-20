// Describe the problem input(s), output(s) and write the algorithm for a
// program that computes the circle’s area and circumference. Also write a
// function prototype to compute the same using radius as input to the function
// and return type void.

#include <math.h>
#include <stdio.h>
#define PI 3.142

void computeCircumference(int radius) {
  double area = PI * pow(radius, 2);
  double circumference = 2 * PI * radius;
  printf("circumference: %lf, area: %lf\n", circumference, area);
}

int main() {
  double radius;
  printf("Enter the radius: ");
  scanf("%lf", &radius);
  computeCircumference(radius);
}