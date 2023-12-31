#include <stdio.h>

void getKthBit(int n, int k)
{
  int bitMask = 1 << k;
  int res = n & bitMask;
  int bit = res >> k;
  printf("%dth bit is: %d\n", k, bit);
}

void setKthBit(int n, int k)
{
  int bitMask = 1 << k;
  n |= bitMask;
  printf("After setting %dth bit: %d\n", k, n);
}

void resetKthBit(int n, int k)
{
  int bitMask = 1 << k;
  n &= ~bitMask;
  printf("After re-setting %dth bit: %d\n", k, n);
}

void main()
{
  int n, k;
  printf("Enter number n and position: ");
  scanf("%d %d", &n, &k);
  getKthBit(n, k);
  setKthBit(n, k);
  resetKthBit(n, k);
}