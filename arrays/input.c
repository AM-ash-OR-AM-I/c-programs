#include <stdio.h>

void takeIntInput(int n, int *arr)
{
  printf("Enter elements of arr: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

void printIntArray(int n, int *arr)
{
  printf("Elements of arr are: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
