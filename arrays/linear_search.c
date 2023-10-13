#include <stdio.h>
#include "input.c"

int search(int arr[], int n, int x)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int n;
  printf("Enter number of elements in arr: ");
  scanf("%d", &n);
  int arr[n];
  takeIntInput(n, arr);
  int key;
  printf("Enter element to search: ");
  scanf("%d", &key);
  int val = search(arr, n, key);
  if (val == -1)
  {
    printf("Element not found");
  }
  else
  {
    printf("Element found at index %d", val);
  }
}