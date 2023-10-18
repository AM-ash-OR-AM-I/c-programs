#include <stdio.h>

int main() {
  int watts = 40, life;
  switch (watts) {
  case 25:
    life = 2500;
    break;
  case 40:
  case 60:
    life = 1000;
    break;
  case 75:
  case 100:
    life = 750;
    break;
  default:
    life = 0;
  }
  printf("Life = %d\n", life);
}