#include <stdio.h>
#include "input.c"

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int length, int arr[])
{
  for (int i = 0; i < length; i++)
  {
    for (int j = i + 1; j < length; j++)
    {
      if (arr[j] < arr[i])
      {
        swap(&arr[i], &arr[j]);
      }
    }
  }
}

int main()
{
  int n;
  takeNumberInput(&n);
  int arr[n];
  takeIntInput(n, arr);
  bubbleSort(n, arr);
  printf("Array after sorting: ");
  printIntArray(n, arr);
}