// Implement the following algorithm for linear search that sets a flag (for
// loop control) when the element being tested matches the target.
// 1. Assume the target has not been found.
// 2. Start with the initial array element.
// 3. repeat while the target is not found and there are more array elements
// 4. if the current element matches the target
// 5. Set a flag to indicate that the target has been found.
// else
// 6. Advance to the next array element.
// 7. if the target was found
// 8. Return the target index as the search result.
// else
// 9. Return -1 as the search result.
// Create a user-defined function with prototype int linear search(const int
// arr[ ], int target, int n); in your program to search the target element.

#include <stdio.h>

int linear_search(const int arr[], int target, int n);

int main() {
  int n, target;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter elements of arr: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter element to search: ");
  scanf("%d", &target);
  int index = linear_search(arr, target, n);
  if (index != -1) {
    printf("Element found at index: %d", index);
  } else {
    printf("Element not found");
  }
}

int linear_search(const int arr[], int target, int n) {
  int found = 0;  // Flag to indicate if the target has been found
  int index = -1; // Index of the target element

  for (int i = 0; i < n && !found; i++) {
    if (arr[i] == target) {
      found = 1; // Set the flag to indicate the target has been found
      index = i; // Store the index of the target element
    }
  }

  if (found) {
    return index; // Return the target index as the search result
  } else {
    return -1; // Return -1 as the search result
  }
}