// Write a program to copy the distinct elements of an int type array to another
// int type array. For example, if the input array is 4 7 7 3 2 5 5 then the
// output array will be 4 7 3 2 5.

#include <stdio.h>

void input1DArr(int *arr, int n);
void print1DArr(int *arr, int n);
int copyDistinctElements(int *arr, int *arr2, int n);

int main() {
  int n;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int arr[n], distinctArr[n];
  input1DArr(arr, n);
  int distCount = copyDistinctElements(arr, distinctArr, n);
  print1DArr(distinctArr, distCount);
}

int copyDistinctElements(int *arr, int *distArr, int n) {
  int j = 0; // i for arr, j for distArr
  for (int i = 0; i < n; i++) {
    int found = 0;
    for (int k = 0; k < j; k++) {
      if (arr[i] == distArr[k]) {
        found = 1;
        break;
      }
    }
    if (!found) {
      distArr[j] = arr[i];
      j++; // Increment j only when a distinct element is found
    }
  }
  return j; // Return the number of distinct elements
}

void input1DArr(int *arr, int n) {
  printf("Enter elements of arr: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
}

void print1DArr(int *arr, int n) {
  printf("Elements of arr are: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}