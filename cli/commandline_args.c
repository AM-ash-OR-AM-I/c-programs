#include <stdio.h>

int main(int argc, char const *argv[]) {
  // argc stores number of arguments
  // argv[i] stores ith argument passed
  printf("Number of arguments: %d\n", argc);
  printf("Arguments: ");
  for (int i = 0; i < argc; i++) {
    printf("%s ", argv[i]);
  }
  printf("\n");
  return 0;
}
