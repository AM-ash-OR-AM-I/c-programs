#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n = 100;
  char str[n];
  char str1[n];
  printf("Enter the string: ");
  fgets(str, 100, stdin);
  printf("Enter the string: ");
  fgets(str1, 100, stdin);

  printf("Enter the delimiter: ");
  char delimiter[5];
  fgets(delimiter, 5, stdin);

  char *token, *token1, *ptr1, *ptr2;

  token = strtok_r(str, delimiter, &ptr1);
  token1 = strtok_r(str1, delimiter, &ptr2);
  // Multiple threads accessing same static variable
  // Unexpected behaviour (critical section), using str_tok fixes it.

  // Continue upto the last token
  while (token != NULL) {
    printf("Token: %s\n", token);
    // Pass NULL to get next token
    token = strtok_r(NULL, delimiter, &ptr1);
  }

  return 0;
}