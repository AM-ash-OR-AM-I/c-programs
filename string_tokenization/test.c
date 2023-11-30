#include <stdio.h>

int val = 30;

int main() {
  int val = 20;

  {
    extern int val;
    printf("Global variable = %d\n", val);
  }
  printf("Local variable = %d\n", val);
  return 0;
}
