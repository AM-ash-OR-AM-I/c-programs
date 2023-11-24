// The bubble sort is another technique for sorting an array. A bubble sort
// compares adjacent array elements and exchanges their values if they are out
// of order. In this way, the smaller values ”bubble“ to the top of the array
// (toward element 0), while the larger values sink to the bottom of the array.
// After the first pass of a bubble sort, the last array element is in the
// correct position; after the second pass the last two elements are correct,
// and so on. Thus, after each pass, the unsorted portion of the array contains
// one less element. Write and test a function that implements this sorting
// method.

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int size);

int main(void) {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  bubbleSort(arr, size);

  printf("The sorted array is: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (arr[j] < arr[i])
        swap(&arr[i], &arr[j]);
    }
  }
}
