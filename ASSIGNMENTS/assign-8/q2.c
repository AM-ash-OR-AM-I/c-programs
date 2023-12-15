#include <stdio.h>
int a, b, c = 0;
void prtFun();
int main() {
  static int a = 1; /* Line 1 */
  prtFun();
  a += 1;
  prtFun();
  printf("\n %d %d ", a, b);
  return (0);
}
void prtFun() {
  static int a = 2; /* Line 2 is initialized only once during compilation so,
                       the 2nd function call will not reinitialize*/
  int b = 1;
  a += ++b;
  printf(" \n %d %d ", a, b);
}