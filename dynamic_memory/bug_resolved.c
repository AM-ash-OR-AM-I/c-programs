#include <stdio.h>
#include <stdlib.h>

int LENGTH = 5;

const int INCREMENT_LENGTH = 5;

int alllocated = 0;

int *arrayAddition(int *ptr, int index) {
  if (index >= LENGTH) {
    printf("Reallocating\n");
    LENGTH += INCREMENT_LENGTH;
    alllocated = 1;
    ptr = (int *)realloc(ptr, LENGTH * sizeof(int)); // Reallocation
  }
  *(ptr + index) = index;
  printf("Memory: %p, Value: %d\n", (ptr + index), *(ptr + index));
  return ptr;
}

int main() {
  int *arr = (int *)malloc(LENGTH * sizeof(int));
  int n = 10;
  for (int i = 0; i < n; i++) {
    arr = arrayAddition(arr, i);
  }

  printf("Elements of arr are: \n");
  for (int i = 0; i < n; i++) {
    printf("Memory: %p, value: %d\n", (arr + i), *(arr + i));
  }

  free(arr);
}