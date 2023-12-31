#include <stdio.h>
#include <stdlib.h>

int LENGTH = 6;

void arrayAddition(int *ptr, int index) {
  if (index >= LENGTH) {
    printf("Reallocating\n");
    LENGTH += 10;
    ptr = (int *)realloc(ptr, LENGTH * sizeof(int)); // Reallocation
  }
  printf("Enter %dth element: ", index + 1);
  *(ptr + index) = index;
  printf("Memory: %p, Value: %d\n", (ptr + index), *(ptr + index));
}

int main() {
  int *arr = (int *)malloc(LENGTH * sizeof(int));
  int n = 16;
  for (int i = 0; i < n; i++) {
    arrayAddition(arr, i);
  }

  printf("Elements of arr are: \n");
  for (int i = 0; i < n; i++) {
    printf("Memory: %p, value: %d\n", (arr + i), *(arr + i));
  }
}