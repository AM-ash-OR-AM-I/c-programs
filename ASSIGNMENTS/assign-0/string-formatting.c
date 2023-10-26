#include <stdio.h>

int main()
{
  char line[] = "hexadecimal";
  printf(":%10s: :%15s: :%15.5s: :%.5s:\n", line, line, line, line);
  int a = 0x80ec;
  float b = 0.3e-12;
  printf(":%4o: :%#10.2e:\n", a, b);
  printf(":%#4o: :%#10.2e:\n", a, b);
  printf(":%4x: :%#10.2e:\n", a, b);
  printf(":%#4x: :%#10.2e:\n", a, b);
  printf(":%#4X: :%#10.2E:\n", a, b);
}