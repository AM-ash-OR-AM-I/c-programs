#include <stdio.h>

// Print 01 pattern
void pattern1()
{
  printf("Pattern:");
  for (int i = 0; i <= 3; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((i + j) % 2 == 0)
      {
        printf("1");
      }
      else
      {
        printf("0");
      }
    }
    printf("\n");
  }
}

void pattern2(){
  
}

void main()
{
  pattern1();
}