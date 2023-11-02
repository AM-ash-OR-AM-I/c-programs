#include "../module/input.c"
#include <stdint.h>
#include <stdlib.h>

void dynamicMemoryMalloc(int n) {
  int *ptr;
  ptr = (int *)malloc(
      n * sizeof(int)); // Contiguous memory of n * 4bytes is allocated
  if (ptr == NULL) {
    printf("Insufficient memory");
    return;
  }
  for (int i = 0; i <= n; i++) {
    ptr[i] = i;
  }
  print1DArr(n, ptr);
}

void computeSum(int n) {
  int *ptr, sum = 0;
  ptr = (int *)malloc(n * sizeof(int));
  input1DArr(n, ptr);
  for (int i = 0; i < n; i++) {
    sum += *(ptr + i);
  }
  printf("Sum = %d", sum);
}

void countFreq(int length, int arr[], int range) {
  int *freq = (int *)calloc(
      range, sizeof(int)); // Dynamic memory allocation using calloc

  for (int i = 0; i < length; i++) {
    freq[arr[i]]++;
  }

  for (int i = 0; i < range; i++) {
    if (freq[i] != 0) {
      printf("Freq of %d is: %d\n", i, freq[i]);
    }
  }
}

int main() {
  int n;
  printf("Enter the length of string: ");
  scanf("%d", &n);
  int *arr = malloc(n * sizeof(int));
  input1DArr(n, arr);
  int range = 100000000;
  countFreq(n, arr, range);
}