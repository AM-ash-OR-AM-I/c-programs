#include <stdio.h>
#include "input.c" // This is a custom header file that contains the takeIntInput and printIntArray functions

void swapWithPointer(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swapWithArray(int a[], int b[])
{
  int temp = a[0];
  a[0] = b[0];
  b[0] = temp;
}

void revArr(int n, int arr[])
{
  for (int i = 0; i < n / 2; i++)
  {
    // swapWithPointer(&arr[i], &arr[n - i - 1]);
    swapWithArray(&arr[i], &arr[n - i - 1]);
  }
}

int main()
{
  int n;
  printf("Enter the number of elements:");
  scanf("%d", &n);
  int arr[n];
  takeIntInput(n, arr);
  revArr(n, arr);
  printIntArray(n, arr);
}