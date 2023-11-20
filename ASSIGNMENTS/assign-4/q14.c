// After studying the population growth of Gotham City in the last decade of the
// 20th century, we have modeled Gotham’s population function as P (t) = 52.966
// + 2.184t where t is years after 1990, and P is population in thousands. Thus,
// P (0) represents the population in 1990, which was 52.966 thousand people.
// Write a program that defines a function named population that predicts
// Gotham’s population in the year provided as an input argument. Write a
// program that calls the function and interacts with the user as follows:
// Enter a year after 1990 > 2015
// Predicted Gotham City population for 2015 (in thousands): 107.566

#include <stdio.h>

double population(int year) { return 52.966 + 2.184 * (year - 1990); }

int main() {
  int year;
  printf("Enter a year after 1990> ");
  scanf("%d", &year);
  printf("Predicted Gotham City population for %d (in thousands): %.3lf\n",
         year, population(year));
}