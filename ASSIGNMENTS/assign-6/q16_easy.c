#include "../../utils/input.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Enter length of arr: ");
  scanf("%d", &n);
  int sumArray[n];
  int *pointerSum = sumArray;
  int arrayPointers[4][n];

  for (int i = 0; i < 4; i++) {
    printf("Enter elements of arr%d(%c): ", i, 97 + i);
    for (int j = 0; j < n; j++) {
      scanf("%d", &arrayPointers[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    *pointerSum = 0;
    for (int j = 0; j < 4; j++) {
      *pointerSum += arrayPointers[j][i];
    }
    pointerSum++;
  }

  print1DArr(n, sumArray);
}