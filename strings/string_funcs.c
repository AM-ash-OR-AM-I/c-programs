#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX 20

void strupr(char *str) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    str[i] = tolower(str[i]);
  }
}

int main() {
  char string1[MAX], string2[MAX], string3[MAX];
  printf("Enter string1 and string2: ");
  scanf("%s %s", string1, string2);
  // printf("Enter input1:");
  // fgets(string1, MAX, stdin);

  // printf("Enter input2:");
  // fgets(string2, MAX, stdin);

  // Compare two strings and return 0 if they are equal otherwise the difference
  // between the ASCII value of the first unmatched character
  printf("Difference at first mismatch: %d\n", strcmp(string1, string2));

  // Compare string1 and string2 upto 3 character
  strncmp(string1, string2, 3);

  printf("String1, string2");

  // Copy string3 from string1 (destination, source)
  strcpy(string3, string1);

  // length of string if the null character is not included.
  // \n is included in the length so we need to subtract 1
  printf("Length = %d\n", strlen(string1) - 1);

  printf("String1 =");
  puts(string1);
  printf("String3 =");
  puts(string3);

  // Concatenate string2 to string1
  strcat(string1, string2);
  printf("String1 =");
  puts(string1);

  // Uppercase string1
  strupr(string1);
  printf("%s", string1);
}