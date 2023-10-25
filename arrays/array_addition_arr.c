#include "input.c"
#include <stdio.h>
int main() {
  int n, m;
  printf("Enter n and m:");
  scanf("%d %d", &n, &m);
  int arr1[n][m];
  int arr2[n][m];
  int sumOf2Arr[n][m];
  input2DArrDereference(n, m, arr1);
  input2DArrPointerOnly(n, m, (int *)arr2);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sumOf2Arr[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  print2DArrPointerOnly(n, m, (int *)sumOf2Arr);
  // print2DArr(n, m, )
}