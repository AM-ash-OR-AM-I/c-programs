#include <stdio.h>

int main() {
  char string[20];

  printf("Enter the input:");
  fgets(string, 20, stdin);
  // char *ptr = string;

  // while (*ptr != '\0') {
  //   printf("%c", *ptr);
  //   ptr++;
  // }
  for (int i = 0; i < 20; i++) {
    printf("%c ", *(string + i));
  }
}