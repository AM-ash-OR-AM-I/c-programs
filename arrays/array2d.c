#include "input.c"
#include <stdio.h>
int main() {
  int n, m;
  printf("Enter n and m:");
  scanf("%d %d", &n, &m);
  int arr[n][m];
  input2DArr(n, m, arr);
  print2DArr(n, m, arr);
}