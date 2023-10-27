#include <stdio.h>

int main() {
  char string[7];

  printf("Enter the input:");
  fgets(string, 7, stdin);
  // char *ptr = string;

  // while (*ptr != '\0') {
  //   printf("%c", *ptr);
  //   ptr++;
  // }
  for (int i = 0; i < 7; i++) {
    printf("%c ", *(string + i));
  }
}