// Write a menu driven program which has following options:
// 1. Factorial of a number.
// 2. Prime or not
// 3. Odd or even
// 4. Exit
// Use input-validation loop and program should terminate only when option 4 is
// selected.

#include <stdio.h>

int main() {
  int choice;
  while (1) {
    printf("1. Factorial of a number.\n");
    printf("2. Prime or not\n");
    printf("3. Odd or even\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      int factorial = 1;
      for (int i = 1; i <= n; i++) {
        factorial *= i;
      }
      printf("Factorial of %d: %d\n", n, factorial);
      break;
    }
    case 2: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      int is_prime = 1;
      for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
          is_prime = 0;
          break;
        }
      }
      if (is_prime) {
        printf("%d is prime\n", n);
      } else {
        printf("%d is not prime\n", n);
      }
      break;
    }
    case 3: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      if (n % 2 == 0) {
        printf("%d is even\n", n);
      } else {
        printf("%d is odd\n", n);
      }
      break;
    }
    case 4:
      return 0;
    default:
      printf("Invalid choice\n");
      break;
    }
  }
  return 0;
}