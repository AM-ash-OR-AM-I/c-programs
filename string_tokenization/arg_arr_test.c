#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gettokens(char *s, char *delimiter) {
  int nTokens = 0;
  if (strtok(s, delimiter) != NULL) {
    nTokens++;
    while (strtok(NULL, delimiter) != NULL) {
      nTokens++;
    }
  }
  return nTokens;
}

int main() {
  char s[] = "abc/qwe/ccd";

  char delimiter[2] = "/";
  char *t, **argvp;

  t = malloc(sizeof(char) * (strlen(s) + 1));
  strcpy(t, s);

  // Count number of tokens
  int nTokens = gettokens(s, delimiter);

  // Size of arg array  = pointer_size * length of array
  argvp = malloc(sizeof(char *) * (nTokens + 1));

  *argvp = strtok(t, delimiter);

  for (int i = 1; i < nTokens; i++) {
    *(argvp + i) = strtok(NULL, delimiter);
  }
  *(argvp + nTokens) = NULL;

  for (int i = 0; argvp[i] != NULL; i++) {
    printf("arr[%d]: %s\n", i, argvp[i]);
  }

  return 0;
}