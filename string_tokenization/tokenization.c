#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n = 100;
  char str[n];
  printf("Enter the string: ");
  fgets(str, 100, stdin);

  printf("Enter the delimiter: ");
  char delimiter[5];
  fgets(delimiter, 5, stdin);

  char *token;

  token = strtok(str, delimiter);

  // Continue upto the last token
  while (token != NULL) {
    printf("Token: %s\n", token);
    // Pass NULL to get next token
    token = strtok(NULL, delimiter);
  }

  return 0;
}