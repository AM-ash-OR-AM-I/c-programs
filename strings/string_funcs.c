#include <stdio.h>
#include <string.h>
#define MAX 20
int main() {
  char string1[MAX], string2[MAX], string3[MAX];
  printf("Enter the input:");
  fgets(string1, MAX, stdin);

  printf("Enter the input:");
  fgets(string2, MAX, stdin);

  // char *ptr1 = string1, *ptr2 = string2;

  // Compare two strings and return 0 if they are equal otherwise the difference
  // between the ASCII value of the first unmatched character
  printf("%d", strcmp(string1, string2));

  // Copy string3 from string1 (destination, source)
  strcpy(string3, string1);

  // puts(string1);
  // puts(string3);
}