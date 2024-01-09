#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  for (int j = 0; j < 4; j++) {
    if (fork() != 0) {
      fork();
      break;
    }
  }

  printf("Child pid = %d, parent id = %d\n", getpid(), getppid());
  getchar();
}

/*
Child pid = 53334, parent id = 50687
Child pid = 53336, parent id = 53334
Child pid = 53335, parent id = 53334
Child pid = 53338, parent id = 53335
Child pid = 53337, parent id = 53335
Child pid = 53340, parent id = 53337
Child pid = 53339, parent id = 53337
Child pid = 53341, parent id = 53339
Child pid = 53342, parent id = 53339

─┬◆ 53334 ashutosh ./q26_b
 ├─┬─ 53335 ashutosh ./q26_b
 │ ├─┬─ 53337 ashutosh ./q26_b
 │ │ ├─┬─ 53339 ashutosh ./q26_b
 │ │ │ ├─── 53341 ashutosh ./q26_b
 │ │ │ └─── 53342 ashutosh ./q26_b
 │ │ └─── 53340 ashutosh ./q26_b
 │ └─── 53338 ashutosh ./q26_b
 └─── 53336 ashutosh ./q26_b
*/