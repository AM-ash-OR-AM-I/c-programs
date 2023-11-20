// Write a program that allows the user to convert a number from one base to
// another. Your program should support bases between 2 and 16 for both the
// input number and the result number. If the user chooses a base outside of
// this range then an appropriate error message should be displayed and the
// program should exit. Divide your program into several functions, including a
// function that converts from an arbitrary base to base 10, a function that
// converts from base 10 to an arbitrary base, and a main program that reads the
// bases and input number from the user.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convertToBase10(char *num, int base) {
  int len = strlen(num);
  int result = 0;
  for (int i = 0; i < len; i++) {
    int digit = num[i] - '0';
    if (digit >= base) {
      printf("Invalid digit %d for base %d\n", digit, base);
      exit(1);
    }
    result += digit * pow(base, len - i - 1);
  }
  return result;
}

char *convertFromBase10(int num, int base) {
  int len = 0;
  int temp = num;
  while (temp) {
    temp /= base;
    len++;
  }
  char *result = malloc(sizeof(char) * (len + 1));
  result[len] = '\0';
  for (int i = len - 1; i >= 0; i--) {
    result[i] = (num % base) + '0';
    num /= base;
  }

  return result;
}

int main() {
  int base1, base2;
  char num[100];
  if (base1 < 2 || base1 > 16 || base2 < 2 || base2 > 16) {
    printf("Invalid base\n");
    exit(1);
  }
  printf("Enter the base of the number: ");
  scanf("%d", &base1);
  printf("Enter the number: ");
  scanf("%s", num);
  printf("Enter the base to convert to: ");
  scanf("%d", &base2);
  int base10 = convertToBase10(num, base1);
  printf("The number in base 10 is %d\n", base10);
  char *result = convertFromBase10(base10, base2);
  printf("The number in base %d is %s\n", base2, result);
}