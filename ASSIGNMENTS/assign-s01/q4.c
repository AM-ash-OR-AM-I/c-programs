#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  fork() && fork(); // If first fork() returns 0 next fork() won't be made.
  printf("pid: %d, ppid: %d\n", getpid(), getppid());
  getchar();
  return 0;
}

/**
 * OP:
 * ❯ pstree pid 38651
─┬◆ 38651 ashutosh ./q4
 ├─── 38652 ashutosh ./q4
 └─── 38653 ashutosh ./q4
*/