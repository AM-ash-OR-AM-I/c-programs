#include <stdio.h>
#define STRING_SIZE 20

int fgetsStringInput(int n, char str[n]) {
  printf("Enter input fget:");
  fgets(str, n, stdin);
  puts(str);
}

void defaultStringInput(int n, char str[n]) {
  printf("Enter input:");
  scanf("%s", str);
  printf("%s", str);
}

int main() {
  char str[STRING_SIZE];
  fgetsStringInput(STRING_SIZE, str);
  defaultStringInput(STRING_SIZE, str);
}