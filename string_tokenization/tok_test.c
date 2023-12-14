#include <stdio.h>
#include <string.h>

int main() {
  char buf[] = "abc/qwe/ccd";
  int i = 0;
  char *p = strtok(buf, "/");

  // Stores array of pointers
  char *array[3];

  while (p != NULL) {
    // Stores the pointer to the ith token
    array[i++] = p;
    p = strtok(NULL, "/");
  }

  for (i = 0; i < 3; ++i)
    // Prints ith pointer using %s
    puts(array[i]);

  return 0;
}