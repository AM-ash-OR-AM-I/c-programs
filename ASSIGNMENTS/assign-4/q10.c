// In a particular jurisdiction, taxi fares consist of a base fare of $4.00,
// plus $0.25 for every 140 meters traveled. Write a function that takes the
// distance traveled (in kilometers) as its only parameter and returns the total
// fare as its only result. Write a main program that demonstrates the function.
// Hint: Taxi fares change over time. Use constants to represent the base fare
// and the variable portion of the fare so that the program can be updated
// easily when the rates increase.

#include <stdio.h>

#define BASE_FARE 4.00
#define VARIABLE_FARE 0.25

double calculateFare(double distance) {
  double fare = BASE_FARE + (distance * 1000 / 140) * VARIABLE_FARE;
  return fare;
}

int main() {
  double distance;
  printf("Enter the distance travelled in kilometers: ");
  scanf("%lf", &distance);
  printf("The total fare is $%lf\n", calculateFare(distance));
  return 0;
}