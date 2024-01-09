#include "q2_bank_race_conditon.h"
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

#define SEM_NAME_1 "sem_1"
#define SEM_NAME_2 "sem_2"

int *balance;

int main() {
  // O_CREAT (create) -> create if nonexistant
  // O_EXCL (exclusive) -> Error if already exist
  sem_t *sem1 = sem_open(SEM_NAME_1, O_CREAT | O_EXCL, S_IRUSR | S_IWUSR, 0);
  pid_t pid;

  balance = malloc(sizeof(int));
  *balance = 1000;

  pid = fork();
  int amount = 100;
  if (pid == 0) {
    deposit(amount);
    sem_post(sem1);

    sem_close(sem1);
  } else {
    sem_wait(sem1);
    withdraw(amount);

    sem_close(sem1);
  }

  sem_unlink(SEM_NAME_1);
}

void withdraw(int amount) {
  printf("Current balance =%d\n", *balance);
  int y = *balance;
  y -= amount;
  sleep(1);
  *balance = y;
  printf("Account balance after withdrawal = %d\n", *balance);
}

void deposit(int amount) {
  printf("Current balance =%d\n", *balance);
  int x = *balance;
  x += amount;
  sleep(1);
  *balance = x;
  printf("Account balance after deposit = %d\n", *balance);
}

/*
Account balance after deposit = 1100
Account balance after withdrawal = 900
*/