#include <stdio.h>

int main()
{
  float floatvar = 123.456;
  int ivar = 1234;
  // printf("Three values of n are %4d*%5d*%d\n", n, n, n);
  // printf(":%-3f: :%-10f: :%-13f: :%f:\n", floatvar, floatvar, floatvar, floatvar);
  // printf(":%.*d:\n", 10, ivar);
  printf(":%.*d:\n", 7, ivar);
  printf(":%*.*d:\n", 13, 7, ivar);
  printf(":%-*.*d:\n", 13, 7, ivar);
  printf(":%-*.*f:\n", 15, 10, floatvar);
  printf("%f %.5f %.3f %.0f\n", floatvar, floatvar, floatvar, floatvar);
  printf("%e %.5e %.3e %.0e", floatvar, floatvar, floatvar, floatvar);
  // printf(":%*d:\n", 10, ivar);
}