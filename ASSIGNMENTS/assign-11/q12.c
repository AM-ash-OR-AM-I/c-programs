#include <stdio.h>
#include <stdlib.h>
int main() {
  char *env_vars[] = {"PWD", "HOME", "LOGNAME", "USER", "PATH", "COLORTERM"};
  int size = sizeof(env_vars) / sizeof(env_vars[0]);
  for (int i = 0; i < size; i++) {
    char *env_value = getenv(env_vars[i]);
    if (env_value != NULL) {
      printf("%s=%s\n", env_vars[i], env_value);
    } else {
      printf("%s is not set\n", env_vars[i]);
    }
  }
  return 0;
}