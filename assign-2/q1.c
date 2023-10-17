#include <stdio.h>

int main() {
  float x = 25.0, y = 10;
  if (y != (x - 10.0))
    x = x - 10.0;
  else
    x = x / 2.0;
}