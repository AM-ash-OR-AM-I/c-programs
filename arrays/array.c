#include <stdio.h>

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

void intArray()
{
  int n;
  printf("Enter number of elements in arr: ");
  scanf("%d", &n);
  int arr[n];
  takeIntInput(n, &arr);
  printIntArray(n, &arr);
}

void charArray()
{
  int n;
  printf("Enter number of elements in arr: ");
  scanf("%d", &n);
  char arr[n + 1];
  printf("Enter elements of arr: ");
  for (int i = 0; i <= n; i++)
  {
    scanf("%c", &arr[i]);
  }
  printf("Elements of arr are: ");
  for (int i = 0; i <= n; i++)
  {
    printf("%c ", arr[i]);
  }
}

void findSum(int *arr, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += *(arr + i);
  }
  printf("Sum of elements of arr is: %d", sum);
}

void sumArray()
{
  int n;
  printf("Enter number of elements in arr: ");
  scanf("%d", &n);
  int arr[n];
  takeIntInput(n, arr);
  findSum(arr, n);
}

int main()
{
  // intArray();

  sumArray();
  return 0;
}