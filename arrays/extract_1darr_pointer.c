#include "input.c"
#include <stdio.h>

int main() {
  int insertArr[][2] = {{1, 2}, {4, 5}};
  int(*ptr1dArr)[2] = insertArr;
  print1DArr(2, *(ptr1dArr));
  int *arr = ptr1dArr;
  for (int i = 0; i < 2; i++) {
    printf("%d ", arr[i]);
  }
}