#include <stdio.h>
#include <stdlib.h>

int main() {
  int rows, cols;

  // Input the number of rows and columns
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  // Dynamically allocate memory for a single-dimensional array
  int *matrix = (int *)malloc(rows * cols * sizeof(int));

  // Input elements of the 2D array
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", (matrix + i * cols + j));
    }
  }

  // Display the 2D array
  printf("The entered matrix is:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", *(matrix + i * cols + j));
    }
    printf("\n");
  }

  // Free the dynamically allocated memory
  free(matrix);

  return 0;
}