#include "../module/input.c"
#include <stdint.h>
#include <stdlib.h>

static int LENGTH = 5;

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

void countFreq(int length, int *arr, int range) {
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

void reallocation(int *ptr) {
  int n1, n2;
  scanf("%d", &n1);
  ptr = (int *)malloc(n1 * sizeof(int));
  for (int i = 0; i < n1; i++) {
    printf("%dth location = %px\n", i, ptr + i);
  }
  scanf("%d", &n2);
  ptr = realloc(ptr, n2);
  for (int i = 0; i < n2; i++) {
    printf("%dth location = %px\n", i, ptr + i);
  }
}

void arrayAddition(int *ptr, int index) {
  if (index >= LENGTH) {
    printf("Reallocating");
    LENGTH += 5;
    ptr = (int *)realloc(ptr, LENGTH); // Reallocation
  }
  printf("Enter %dth element: ", index);
  scanf("%d", (ptr + index));
  printf("%px %d, ", (ptr + index), *(ptr + index));
}
int main() {
  // int n;
  // printf("Enter the length of string: ");
  // scanf("%d", &n);
  // int *arr = malloc(n * sizeof(int));
  // input1DArr(n, arr);
  // int range = 100000000;
  // countFreq(n, arr, range);
  // int *ptr;
  int *arr = (int *)malloc(LENGTH * sizeof(int));
  int n = 10;
  for (int i = 0; i < n; i++) {
    arrayAddition(arr, i);
  }

  printf("Elements of arr are: ");
  for (int i = 0; i < n; i++) {
    printf("%px %d, ", (arr + i), *(arr + i));
  }

  // reallocation(ptr);
}
