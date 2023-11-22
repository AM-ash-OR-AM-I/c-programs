#include <stdio.h>
int i = 10;
int sub();
int add(int);
int main() {
  int i;
  int arr[] = {10, 20, add(30), sub() + 10};
  for (i = 0; i < 4; i++)
    printf("arr[%d]=%d\n", i, arr[i]);
  return 0;
}
int add(int x) { return x; }
int sub() {
  int i = 10;
  return (i + 30);
}