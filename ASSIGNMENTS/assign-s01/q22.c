// Multiple exit handlers
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void X() { printf("1"); }
void Y() { printf("2"); }
void P() { printf("3"); }
void Q() { printf("4"); }
int main(void) {
  atexit(X);
  atexit(Y);
  atexit(P);
  atexit(Q);
  return 1; // 4321 reverse order
}