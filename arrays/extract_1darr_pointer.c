#include "input.c"
#include <stdio.h>

int main() {
  int insertArr[][2] = {{1, 2}, {4, 5}};
  // int arr2D[][2];
  int(*ptr1dArr)[2] = insertArr;
  // *(ptr2dArr + 1) = insertArr;

  print1DArr(2, *(ptr1dArr + 1));
}