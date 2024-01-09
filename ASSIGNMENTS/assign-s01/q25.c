#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  for (int i = 0; i < 3; i++) { // Creating fan process
    if (fork() == 0) {          // If child break
      if (i == 1) {             // If middle child fork()
        for (int j = 0; j < 2; j++) {
          if (fork() == 0) {
            if (j == 1) {
              if (fork() == 0)
                fork();
            }
            break;
          }
        }
      }
      break;
    }
  }

  printf("Child pid = %d, parent id = %d\n", getpid(), getppid());
  getchar();
}
