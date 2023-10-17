#include <math.h>
#include <stdio.h>
double grade(float gpa) {
  if (0 <= gpa <= 0.99) {
    printf("Failed semesterregistration suspended");
  } else if (1 <= gpa <= 1.99) {
    printf("On probation for next semester");
  } else if (2 <= gpa <= 2.99) {
    printf("(no message)");
  } else if (3 <= gpa <= 3.49) {
    printf("Deans list for semester");
  } else {
    printf("Highest honors for semester");
  }
}

int main() {
  printf("Enter your gpa: ");
  int gpa;
  scanf("%d", &gpa);
  double area1 = grade(gpa);
}