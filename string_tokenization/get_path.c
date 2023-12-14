#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Get user paths
  char *path = getenv("PATH");
  printf("%s", path);

  char *argv;

  char delimiter[1] = ":";
  path = strtok(path, delimiter);

  printf("Paths are: ");
  while (path != NULL) {
    printf("%s\n", path);
    path = strtok(NULL, delimiter);
  }
}