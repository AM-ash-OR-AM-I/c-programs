
#include <math.h>
#include <stdio.h>

// The natural logarithm can be approximated by the following series.

// If x is input through the keyboard, write a program to calculate the sum of
// first nine terms of this series.

int main() {
  float x;
  printf("Enter x: ");
  scanf("%f", &x);
  float sum = x - 1 / x;
  for (int i = 2; i <= 9; i++) {
    sum += .5 * pow(x - 1, i) / x;
  }
  printf("Sum of first nine terms of the series: %f\n", sum);
  return 0;
}