#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Create an argument array containing tokens in array

int gettokens(char *str, char *delimiter) {
  int ntokens = 0;
  if (strtok(str, delimiter) != NULL) {
    ntokens++;
    while (strtok(NULL, delimiter) != NULL) {
      ntokens++;
    }
  }
  return ntokens;
}

char **make_argv(char *str, char *delimiter);

int main() {
  int n = 100;
  char str[n], delimiter[2];
  char **argv;
  printf("Enter a string: ");
  fgets(str, n, stdin);
  printf("Enter delimiter: ");
  fgets(delimiter, 2, stdin);
  argv = make_argv(str, delimiter);
  for (int i = 0; argv[i] != NULL; i++) {
    printf("argv[%d]: %s\n", i, argv[i]);
  }

  return 0;
}

char **make_argv(char *str, char *delimiter) {
  int ntokens;
  char **argvp, *str1;
  str1 = malloc(sizeof(char) * (strlen(str) + 1));
  strcpy(str1, str);
  ntokens = gettokens(str, delimiter); // Value of str is changed
  argvp = malloc(sizeof(char *) * (ntokens + 1));

  *argvp = strtok(str1, delimiter); // Copied str1 is used

  for (int i = 1; i < ntokens; i++) {
    *(argvp + i) = strtok(NULL, delimiter);
  }

  *(argvp + ntokens) = NULL;
  return argvp;
}