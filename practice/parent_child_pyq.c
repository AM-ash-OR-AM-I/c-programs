#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  // P1 -|
  //     |--> P2
  //          |--> p3
  //          |--> p4
  //          |--> p5
  //          |--> p6
  pid_t pid, childpid;
  pid = fork();
  if (pid == 0) {
    // Creating fan process
    for (int i = 0; i < 4; i++) {
      childpid = fork();
      if (childpid == 0) {
        break;
      }
    }
  }
  printf("Process ID: %d, parent id: %d\n", getpid(), getppid());
  getchar(); // Wait for input before finsihing
}

/*
Process ID: 48822, parent id: 36952
Process ID: 48824, parent id: 48823
Process ID: 48825, parent id: 48823
Process ID: 48826, parent id: 48823
Process ID: 48823, parent id: 48822
Process ID: 48827, parent id: 48823

❯ pstree pid 47633
─┬◆ 47633 ashutosh ./parent_child_pyq
 └─┬─ 47634 ashutosh ./parent_child_pyq
   ├─── 47635 ashutosh ./parent_child_pyq
   ├─── 47636 ashutosh ./parent_child_pyq
   ├─── 47637 ashutosh ./parent_child_pyq
   └─── 47638 ashutosh ./parent_child_pyq
*/