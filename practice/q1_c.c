#include <stdio.h>

int main() {
  int sr = 10, sr1, pr = 100;
  sr = scanf("%d%d", &sr,
             &sr1); // Returns number of inputs read (35 45) will mean 2 NOT 4
  pr = printf("scanf returns:%d\n", sr);
  printf("printf returns=%d %d\n", pr, sr1);
}