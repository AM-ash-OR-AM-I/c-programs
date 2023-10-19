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

void print2DArr(int n, int m, int arr[][m]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", arr[i][j]);
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
