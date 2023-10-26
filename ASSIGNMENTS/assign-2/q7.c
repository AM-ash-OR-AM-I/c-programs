/*
Implement the following decision table using a multiple-alternative if
statement. Assume that the wind speed is given as an integer.

Wind Speed (mph)  Category
below 25          not a strong wind
2538              strong wind
3954              gale
5572              whole gale
above             72 hurricane
*/

#include <stdio.h>

int main() {
  int windSpeed;
  printf("Enter wind speed: ");
  scanf("%d", &windSpeed);

  if (windSpeed < 25) {
    printf("Not a strong wind");
  } else if (windSpeed < 38) {
    printf("Strong wind");
  } else if (windSpeed < 54) {
    printf("Gale");
  } else if (windSpeed < 72) {
    printf("Whole gale");
  } else {
    printf("Hurricane");
  }
}