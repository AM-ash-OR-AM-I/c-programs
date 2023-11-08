#include <stdio.h>
#include <stdlib.h>

int LENGTH = 8;

void arrayAddition(int *ptr, int index) {
  if (index >= LENGTH) {
    printf("Reallocating");
    LENGTH += 8;
    ptr = (int *)realloc(ptr, LENGTH); // Reallocation
  }
  printf("Enter %dth element: ", index);
  scanf("%d", (ptr + index));
  printf("Memory: %px, Value:%d\n", (ptr + index), *(ptr + index));
}

int main() {
  int *arr = (int *)malloc(LENGTH * sizeof(int));
  int n = 16;
  for (int i = 0; i < n; i++) {
    arrayAddition(arr, i);
  }

  printf("Elements of arr are: \n");
  for (int i = 0; i < n; i++) {
    printf("Memory: %px, value: %d\n", (arr + i), *(arr + i));
  }
}
