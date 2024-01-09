#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  if (fork() == 0) {                // Fork for child
    if (fork() == 0) {              // Fork for child
      for (int i = 0; i < 3; i++) { // Creating fan process
        if (fork() == 0) {          // If child break
          if (i == 1) {             // If middle child fork()
            fork();
          }
          break;
        }
      }
    }
  }

  printf("Child pid = %d, parent id = %d\n", getpid(), getppid());
  getchar();
}

/*
Child pid = 49774, parent id = 49188
Child pid = 49775, parent id = 49774
Child pid = 49777, parent id = 49776
Child pid = 49776, parent id = 49775
Child pid = 49779, parent id = 49776
Child pid = 49778, parent id = 49776
Child pid = 49780, parent id = 49778

❯ pstree pid 49774
─┬◆ 49774 ashutosh ./q26
 └─┬─ 49775 ashutosh ./q26
   └─┬─ 49776 ashutosh ./q26
     ├─── 49777 ashutosh ./q26
     ├─┬─ 49778 ashutosh ./q26
     │ └─── 49780 ashutosh ./q26
     └─── 49779 ashutosh ./q26
*/