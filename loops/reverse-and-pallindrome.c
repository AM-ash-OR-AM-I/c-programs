#include <stdio.h>
#include <stdbool.h>

bool checkPallindrome(int n)
{
  int rev = 0, orgN = n;
  while (n)
  {
    int rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }
  return orgN == rev;
}

int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  bool pallindrome = checkPallindrome(n);
  printf("%d is %spallindrome", n, pallindrome ? "" : "not ");