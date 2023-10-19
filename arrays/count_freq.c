#include <stdio.h>
#include "input.c"

void findDuplicate(int length, int arr[])
{
  int repeatition = 0;
  int visited[length];
  for (int i = 0; i < length; i++)
  {
    repeatition = 0;
    for (int j = i + 1; j < length; j++)
    {
      if (arr[i] == arr[j])
      {
        repeatition++;
        visited[i] = 1;
      }
    }
    if (visited[i] == 1)
    {
      printf("%d is repeated %d times\n", arr[i], repeatition);
    }
  }
}

void countFreq(int length, int arr[], int range)
{
  int freq[range];

  for (int i = 0; i < range; i++)
  {
    freq[i] = 0;
  }

  for (int i = 0; i < length; i++)
  {
    freq[arr[i]]++;
  }

  for (int i = 0; i < range; i++)
  {
    if (freq[i] != 0)
    {
      printf("Freq of %d is: %d\n", i, freq[i]);
    }
  }
}

int main()
{
  int n;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int arr[n];
  input1DArr(n, arr);
  countFreq(n, arr, 100);
}