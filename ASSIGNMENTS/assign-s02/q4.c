#include <fcntl.h>
#include <semaphore.h>
#include <sys/stat.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>

#define SEM_NAME_1 "/sem_1"

// Suppose process 1 must execute statement a before process 2 executes
// statement b. The semaphore sync enforces the ordering in the following
// pseudocode, provided that sync is initially 0.

int main() {
  sem_t *sync;
  // O_CREATE -> CREATE if doesn't  exist, O_EXECL -> Throw error if exists.
  // S_IRUSR -> Semaphore is read user, S_IWUSR -> Semaphore is write user.
  sync = sem_open(SEM_NAME_1, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR, 0);

  if (fork() == 0) {
    printf("Process1 executes a\n");
    sleep(1);
    sem_post(sync);

    sem_close(sync);
  } else {
    sem_wait(sync);
    printf("Process2 executes b\n");
    sleep(1);

    sem_close(sync);
  }
  sem_unlink(SEM_NAME_1);
}