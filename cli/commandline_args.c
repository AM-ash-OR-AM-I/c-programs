#include <stdio.h>

int main(int argc, char const *argv[]) {
  // argc stores number of arguments
  // argv[i] stores ith argument passed
  printf("Number of arguments: %d\n", argc);
  printf("Arguments:\n");
  for (int i = 0; argv[i] != NULL; i++) {
    printf("argv[%d]=%s\n", i, argv[i]);
  }
  return 0;
}
