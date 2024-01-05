#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  int *shrd;
  int pid, status;

  // Allocate memory for shared variable
  shrd = malloc(sizeof(int));

  // Initialize shared variable
  *shrd = 0;

  // Case-1: Execute P1 first then P2
  if ((pid = fork()) == 0) {
    // Child process (P-1)
    int x;

    // Execute P-1
    x = *shrd;
    x = x + 1;
    sleep(1);
    *shrd = x;

    printf("P-1: *shrd = %d\n", *shrd);

    // Exit the child process
    exit(0);
  } else {
    // Parent process
    // Wait for child process (P-1) to finish
    waitpid(pid, &status, 0);

    // Fork another process (P-2)
    if ((pid = fork()) == 0) {
      // Child process (P-2)
      int y;

      // Execute P-2
      y = *shrd;
      y = y - 1;
      sleep(1);
      *shrd = y;

      printf("P-2: *shrd = %d\n", *shrd);

      // Exit the child process
      exit(0);
    } else {
      // Wait for the second child process (P-2) to finish
      waitpid(pid, &status, 0);

      // Print final value of shared variable
      printf("Final *shrd (Case-1): %d\n", *shrd);
    }
  }

  // Reset shared variable
  *shrd = 0;

  // Case-2: Execute P2 first then P1
  if ((pid = fork()) == 0) {
    // Child process (P-2)
    int y;

    // Execute P-2
    y = *shrd;
    y = y - 1;
    sleep(1);
    *shrd = y;

    printf("P-2: *shrd = %d\n", *shrd);

    // Exit the child process
    exit(0);
  } else {
    // Parent process
    // Wait for child process (P-2) to finish
    waitpid(pid, &status, 0);

    // Fork another process (P-1)
    if ((pid = fork()) == 0) {
      // Child process (P-1)
      int x;

      // Execute P-1
      x = *shrd;
      x = x + 1;
      sleep(1);
      *shrd = x;

      printf("P-1: *shrd = %d\n", *shrd);

      // Exit the child process
      exit(0);
    } else {
      // Wait for the second child process (P-1) to finish
      waitpid(pid, &status, 0);

      // Print final value of shared variable
      printf("Final *shrd (Case-2): %d\n", *shrd);
    }
  }

  // Free allocated memory
  free(shrd);

  return 0;
}
