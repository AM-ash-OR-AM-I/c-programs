#include <stdio.h>
void main() {
  char greetings[] = "Hello World!";
  int n = sizeof(greetings) / sizeof(greetings[0]);
  for (int i = 0; i < n; i++) {
    printf("%c", greetings[i]);
  }
}