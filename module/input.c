#include <stdio.h>

void input1DArr(int n, int *arr) {
  printf("Enter elements of arr: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
}

void input2DArr(int n, int m, int arr[][m]) {
  printf("Enter array elements:");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
}

void input2DArrDereference(int n, int m, int arr[][m]) {
  printf("Enter array elements:");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", (*(arr + i) + j));
    }
  }
}

void input2DArrPointerOnly(int n, int m, int *arr) {
  printf("Enter array elements:");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", (arr + n * i) + j);
    }
  }
}

void print2DArr(int n, int m, int arr[][m]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

void print2DArrDereferencing(int n, int m, int arr[][m]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", *(*(arr + i) + j)); // Dereferencing using pointer
    }
    printf("\n");
  }
}

void print2DArrPointerOnly(int n, int m, int *arr) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", *((arr + n * i) + j)); // Dereferencing using pointer
    }
    printf("\n");
  }
}

void print1DArr(int n, int *arr) {
  printf("Elements of arr are: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}

void takeNumberInput(int *n) {
  printf("Enter the number of elements:");
  scanf("%d", n);
}
