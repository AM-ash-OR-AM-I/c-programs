/*
12. Write a switch statement that assigns to the variable lumens the expected
brightness of a standard light bulb whose wattage has been stored in watts.
Assign 1 to lumens if the value of watts is not in the table.Use this table:
Watts Brightness (in Lumens)
15 125
25 215
40 500
60 880
75 1000
100 167
*/

#include <stdio.h>

int main() {
  printf("Enter watts: ");
  int lumens, watts;
  scanf("%d", &watts);
  switch (watts) {
  case 15:
    lumens = 125;
    break;
  case 25:
    lumens = 215;
    break;
  case 40:
    lumens = 500;
    break;
  case 60:
    lumens = 880;
    break;
  case 75:
    lumens = 1000;
    break;
  case 100:
    lumens = 167;
    break;
  default:
    lumens = 1;
  }
  printf("Lumens = %d\n", lumens);
}