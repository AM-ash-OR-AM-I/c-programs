#include <stdio.h>

void main()
{
  char op;
  int res, x, y;
  printf("Enter x, y and operator: ");
  scanf("%d %d %c", &x, &y, &op);
  res = (op == '+') ? (x + y) : (op == '-') ? (x - y)
                            : (op == '/')   ? (x / y)
                                            : x * y;
  printf("Res = %d", res);
}