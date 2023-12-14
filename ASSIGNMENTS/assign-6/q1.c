#include <stdio.h>
int main() {
  int Ia = 345;
  float fb = 4.5;
  char chvar = 'Z';
  printf("Ia = %d\tmem: 0x%x\
  \nssfb = %f\tmem: 0x%x\
  \nchvar = % c\tmem: 0x%x",
         Ia, &Ia, fb, &fb, chvar, &chvar);
}