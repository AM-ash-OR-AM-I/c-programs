/*
16. A triangle can be classified based on the lengths of its sides as
equilateral, isosceles or scalene. All three sides of an equilateral triangle
have the same length. An isosceles triangle has two sides that are the same
length, and a third side that is a different length. If all of the sides have
different lengths then the triangle is scalene. Write a program that reads the
lengths of the three sides of a triangle from the user. Then display a message
that states the triangles type
*/

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter the lengths of the three sides of a triangle: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a == b && b == c) {
    printf("Equilateral triangle\n");
  } else if (a == b || b == c || a == c) {
    printf("Isosceles triangle\n");
  } else {
    printf("Scalene triangle\n");
  }
}