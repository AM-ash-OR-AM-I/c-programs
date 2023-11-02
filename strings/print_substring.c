#include <stdio.h>

void printSubstring(char *string, int start, int length) {
  char substr[length];
  for (int i = start, j = 0; i < (start + length) && string[i] != '\0';
       i++, j++) {
    substr[j] = string[i];
  }
  printf("%s", substr);
}

int main() {
  int n = 100;
  char string[n];
  printf("Enter string:");
  fgets(string, n, stdin);
  printf("Enter start index and length:");
  int start, length;
  scanf("%d %d", &start, &length);
  printSubstring(string, start, length);
}