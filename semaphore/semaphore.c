#include <fcntl.h>
#include <semaphore.h>
#include <sys/stat.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>

#define SEM_NAME_1 "/sem_1"
#define SEM_NAME_2 "/sem_2"

int main() {
  sem_t *sem1, *sem2;
  // O_CREATE -> CREATE if doesn't  exist, O_EXECL -> Throw error if exists.
  // S_IRUSR -> Semaphore is read user, S_IWUSR -> Semaphore is write user.
  sem1 = sem_open(SEM_NAME_1, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR, 0);
  sem2 = sem_open(SEM_NAME_2, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR, 0);

  if (fork() == 0) {
    printf("1\n");
    sem_post(sem1);
    sem_wait(sem2);
    printf("3\n");
    sem_post(sem1);

    sem_close(sem1);
    sem_close(sem2);
  } else {
    sem_wait(sem1);
    printf("2\n");
    sem_post(sem2);
    sem_wait(sem1);
    printf("4\n");

    wait(NULL);
  }
}