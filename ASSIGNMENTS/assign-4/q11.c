// Create a function named nextPrime that finds and returns the first prime
// number larger than some integer, n. The value of n will be passed to the
// function as its only parameter. The main function in the program that reads
// an integer from the user and displays the first prime number larger than the
// entered value. Additionally, your program must specify the function prototype
// and identify the actual argument(s) and formal parameters.

#include <stdio.h>

int isPrime(int n) {
  if (n <= 1)
    return 0;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return 0;
  return 1;
}

int nextPrime(int n) {
  int next = n + 1;
  while (1) {
    if (isPrime(next))
      return next;
    next++;
  }
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The next prime number is %d\n", nextPrime(n));
}