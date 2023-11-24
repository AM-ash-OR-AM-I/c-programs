// Write a function that takes two type int array input arguments and their
// effective size and produces a result array containing the sums of
// corresponding elements. For example, for the three-element input arrays 5 -1
// 7 and 2 4 -2 , the result would be an array containing 7 3 5 .

#include <stdio.h>
#include <stdlib.h>

void sum(int a[], int b[], int size, int result[]) {
  for (int i = 0; i < size; i++) {
    result[i] = a[i] + b[i];
  }
}

int main() {
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int a[n];
  int b[n];
  printf("Enter elements of array 1: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("Enter elements of array 2: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }
  int result[100];
  sum(a, b, n, result);
  for (int i = 0; i < n; i++) {
    printf("%d ", result[i]);
  }
  return 0;
}