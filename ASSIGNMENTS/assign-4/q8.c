// Write a program that prompts the user for the two legs of a right triangle
// and makes use of the pow and sqrt functions and the Pythagorean theorem to
// compute the length of the hypotenuse.

#include <math.h>
#include <stdio.h>

int main() {
  double a, b;
  printf("Enter the two legs of a right triangle: ");
  scanf("%lf %lf", &a, &b);
  double c = sqrt(pow(a, 2) + pow(b, 2));
  printf("The hypotenuse is %lf\n", c);
  return 0;
}

// O/P:
// ❯ ./a.out
// Enter the two legs of a right triangle: 4 5
// The hypotenuse is 6.403124