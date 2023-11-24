#include "input.c"
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int length, int arr[]) {
  for (int i = 0; i < length; i++) {
    for (int j = i + 1; j < length; j++) {
      if (arr[j] < arr[i]) {
        swap(&arr[i], &arr[j]);
      }
    }
  }
}

int main() {
  int n;
  takeNumberInput(&n);
  int arr[n];
  input1DArr(n, arr);
  bubbleSort(n, arr);
  printf("Array after sorting: ");
  print1DArr(n, arr);
}