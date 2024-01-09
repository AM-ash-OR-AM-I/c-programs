#include <fcntl.h>
#include <semaphore.h>
#include <sys/stat.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>

#define SEM_NAME_1 "sem_1"
#define SEM_NAME_2 "sem_2"

// Suppose process 1 must execute statement a before process 2 executes
// statement b. The semaphore sync enforces the ordering in the following
// pseudocode, provided that sync is initially 0.

int main() {
  sem_t *S, *Q;
  // O_CREATE -> CREATE if doesn't  exist, O_EXECL -> Throw error if exists.
  // S_IRUSR -> Semaphore is read user, S_IWUSR -> Semaphore is write user.
  S = sem_open(SEM_NAME_1, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR, 0);
  Q = sem_open(SEM_NAME_2, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR, 1);

  if (fork() == 0) {
    for (;;) {
      sem_wait(S);
      printf("Process1 executes a\n");
      sleep(1);
      sem_post(Q);

      sem_close(S);
      sem_close(Q);
    }
  } else {
    for (;;) {
      sem_wait(Q);
      printf("Process2 executes b\n");
      sleep(1);
      sem_post(S);

      sem_close(S);
      sem_close(Q);
    }
  }
  sem_unlink(SEM_NAME_1);
  sem_unlink(SEM_NAME_2);
}