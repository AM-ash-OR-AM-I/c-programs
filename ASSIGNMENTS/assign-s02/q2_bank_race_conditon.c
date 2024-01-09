#include "q2_bank_race_conditon.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int *balance;

int main() {
  pid_t pid;

  balance = malloc(sizeof(int));
  *balance = 1000;

  pid = fork();
  int amount = 100;
  if (pid == 0) {
    deposit(amount);
  } else {
    withdraw(amount);
  }
}

void withdraw(int amount) {
  int y = *balance;
  y -= amount;
  sleep(1);
  *balance = y;
  printf("Account balance after withdrawal = %d\n", *balance);
}

void deposit(int amount) {
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