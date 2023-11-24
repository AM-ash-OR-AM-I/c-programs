// The binary search algorithm that follows may be used to search an array when
// the elements are in order. The algorithm for binary search given as;
// 1. Let bottom be the subscript of the initial array element.
// 2. Let top be the subscript of the last array element.
// 3. Let found be false.
// 4. Repeat as long as bottom isn’t greater than top and the target has not
// been found
// 5. Let middle be the subscript of the element halfway between bottom and top.
// 6. if the element at middle is the target
// 7. Set found to true and index to middle.
// else if the element at middle is larger than the target
// 8. Let top be middle - 1.
// else
// 9. Let bottom be middle + 1.
// Write and test a function binary srch that implements this algorithm for an
// array of integers. When there is a large number of array elements, which
// function do you think is faster: binary srch or the linear search algorithm

#include <stdio.h>

void input1DArr(int *arr, int n);
int binarySearch(int arr[], int x, int bottom, int top);

int main() {
  int n, x;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int arr[n];
  input1DArr(arr, n);
  printf("Enter element to search: ");
  scanf("%d", &x);
  int index = binarySearch(arr, x, 0, n - 1);
  if (index != -1) {
    printf("Element found at index: %d", index);
  } else {
    printf("Element not found");
  }
}

int binarySearch(int arr[], int x, int bottom, int top) {
  int middle;
  while (bottom <= top) {
    middle = (top + bottom) / 2;
    if (x == arr[middle])
      return middle;
    else if (x > arr[middle]) {
      top = middle - 1;
    } else {
      bottom = middle + 1;
    }
  }
  return -1;
}

void input1DArr(int *arr, int n) {
  printf("Enter elements of arr: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
}