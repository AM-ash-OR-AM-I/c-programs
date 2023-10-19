#include "input.c"
#include <stdio.h>
int main() {
  int n, m;
  printf("Enter n and m:");
  scanf("%d %d", &n, &m);
  int arr[n][m];
  int transpose[n][m];
  input2DArr(n, m, arr);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      transpose[i][j] = arr[j][i];
    }
  }
  print2DArr(n, m, transpose);
}