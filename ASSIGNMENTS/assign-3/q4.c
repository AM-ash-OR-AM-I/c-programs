// An integer n is divisible by 9 if the sum of its digits is divisible by 9.
// Develop a program to display each digit, starting with the rightmost digit.
// Your program should also determine whether or not the number is divisible
// by 9.
// Test it on the following numbers:
// n = 154368
// n = 621594
// n = 123456
// Hint: Use the % operator to get each digit; then use / to remove that digit.
// So 154368 % 10 gives 8 and 154368 / 10 gives 15436. The next digit extracted
// should be 6, then 3 and so on

#include <stdio.h>

void checkDivisibleBy9(int n) {
  int sum = 0;
  int i = 0;
  while (n != 0) {
    int dig = n % 10;
    printf("%dth place: %d\n", i++, dig);
    sum += dig;
    n /= 10;
  }

  printf((sum % 9) ? "Not divisible by 9" : "Divisible by 9");
}

int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  checkDivisibleBy9(n);
  return 0;
}