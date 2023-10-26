#include "input.c"
#include <stdio.h>

void intArray() {
  int n;
  printf("Enter number of elements in arr: ");
  scanf("%d", &n);
  int arr[n];
  input1DArr(n, &arr);
  print1DArr(n, &arr);
}

void charArray() {
  int n;
  printf("Enter number of elements in arr: ");
  scanf("%d", &n);
  char arr[n + 1];
  printf("Enter elements of arr: ");
  for (int i = 0; i <= n; i++) {
    scanf("%c", &arr[i]);
  }
  printf("Elements of arr are: ");
  for (int i = 0; i <= n; i++) {
    printf("%c ", arr[i]);
  }
}

void findSum(int *arr, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += *(arr + i);
  }
  printf("Sum of elements of arr is: %d", sum);
}

void sumArray() {
  int n;
  printf("Enter number of elements in arr: ");
  scanf("%d", &n);
  int arr[n];
  input1DArr(n, arr);
  findSum(arr, n);
}

int main() {
  // intArray();

  sumArray();
  return 0;
}