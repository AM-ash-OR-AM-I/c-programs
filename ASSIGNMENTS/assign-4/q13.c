// Write a program that calculates the speed of sound ( a ) in air of a given
// temperature T (◦ F ). Formula to compute the speed in ft/sec:
// a = 1086 * sqrt(5T+297/247)
// Be sure your program does not lose the fractional part of the quotient in the
// formula shown. As part of your solution, write and call a function that
// displays instructions to the program user.

#include <math.h>
#include <stdio.h>

void displayInstructions() {
  printf("Enter the temperature in Fahrenheit: ");
}

double calculateSpeedOfSound(double temp) {
  return 1086 * sqrt(5 * temp + 297) / 247;
}

int main() {
  double temp;
  displayInstructions();
  scanf("%lf", &temp);
  printf("The speed of sound is %lf ft/sec\n", calculateSpeedOfSound(temp));
}