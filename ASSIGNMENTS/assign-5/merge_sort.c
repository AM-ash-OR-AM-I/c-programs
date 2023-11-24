// You have two independent sorted arrays of size m, and n respectively, where
// m, n > 0. You are required to merge the two arrays such that the merged array
// will be in sorted form and will contain exactly m + n number of elements. You
// are not allowed to use any kind of sorting algorithm. Design your program to
// meet the above given requirement.

#include <stdio.h>
#include <stdlib.h>

void input1DArr(int *arr, int n);
void print1DArr(int *arr, int n);
int *mergeArray(int arr1[], int arr2[], int n, int m);

int main() {
  int n, m;
  printf("Enter number of elements for arr1 and arr2: ");
  scanf("%d %d", &n, &m);
  int arr1[n], arr2[m];
  input1DArr(arr1, n);
  input1DArr(arr2, m);
  int *mergedArr = mergeArray(arr1, arr2, n, m);
  print1DArr(mergedArr, n + m);
}

int *mergeArray(int arr1[], int arr2[], int n, int m) {
  int *pointer1 = arr1, *pointer2 = arr2;
  int *mergedArr = malloc(sizeof(int) * (m + n));

  int i = 0, j = 0, k = 0;
  while (i < n || j < m) {
    if (j == m || (i < n && *(pointer1 + i) < *(pointer2 + j))) {
      mergedArr[k] = *(pointer1 + i);
      i++;
    } else {
      mergedArr[k] = *(pointer2 + j);
      j++;
    }
    k++;
  }
  return mergedArr;
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