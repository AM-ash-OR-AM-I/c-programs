#include <stdio.h>
#include <string.h>

void swap2(char *string, int i, int j) {
  char temp = string[i];
  string[i] = string[j];
  string[j] = temp;
}

void reverseRecursive(char *string, int low, int high) {
  if (low >= high) {
    return;
  }
  swap2(string, low, high);
  reverseRecursive(string, low + 1, high - 1);
}

void reverse(char *string) {
  int length = strlen(string);
  reverseRecursive(string, 0, length - 1);
}

int main() {
  char string[30];
  printf("Enter string:");
  scanf("%s", string);
  reverse(string);
  puts(string);
}