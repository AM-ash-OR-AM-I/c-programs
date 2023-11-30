#include <stdio.h>

// Create an argument array containing tokens in array

char **make_argv(char *str);

int main(int argc, char const *argv[]) {
  printf("Enter a string");
  char *str[100];
  fgets(str, 100, stdin);
  printf("Enter delimiter: ");
  make_argv(str);
  return 0;
}


char **make_argv(char *str) {
  
}