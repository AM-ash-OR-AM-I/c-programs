// Positions on a chess board are identified by a two digit number from 11
// to 88. The unit place digit identifies the column, while the 10th place digit
// identifies the row, as shown below:

// Write a program that reads a position ( i.e. 2 digit number) from the user.
// Write a use-defined function to check whether 2 digit position is a valid
// cell or not as per the function protoype int flag=IsvalidPosition (int);. If
// the position is valid, use an if statement to determine if the column begins
// with a black square or a white square then report the color of the square in
// that row. For example, if the user enters 11 then your program should report
// that the square is black. If the user enters 34 then your program should
// report that the square is white.

#include <stdio.h>
int col, row;
int isValidPosition(int position) {
  col = position % 10, row = position / 10 % 10;
  if (col >= 9 || row >= 9 || col <= 0 || row <= 0) {
    return 0;
  }
  return 1;
}

int main() {
  int position;
  printf("Enter position: ");
  scanf("%d", &position);
  if (isValidPosition(position)) {
    printf(((col + row) % 2 == 0) ? "Black" : "White");
  } else {
    printf("Invalid position");
  }
}