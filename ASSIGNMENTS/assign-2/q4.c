#include <math.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
double area(int side, char choice) {
  switch (choice) {
  case 'S':
    return side * side;
  case 'C':
    return M_PI * side * side; // Why does it flag as error but runs fine? The
                               // inspected <math.h> does include M_PI,
                               // something wrong with vscode?

  default:
    break;
  }
}

int main() {
  printf("Enter the side and choice: ");
  int side, choice;
  scanf("%d %c", &side, &choice);
  double area1 = area(side, choice);
  printf("Area = %lf", area1);
}