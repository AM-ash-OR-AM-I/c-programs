#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

pid_t add(pid_t a, pid_t b) { return a + b; }
int main(void) {
  pid_t x = 10;
  printf("%d\n", x);
  x = add(fork(), fork());
  printf("%d\n", x);
  return 0;
}

/*
10
83261
41630
41632
0

x!=0 printed 4 times
x=0 printer 1 time
*/