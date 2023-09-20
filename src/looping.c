#include <stdio.h>

void forLoop()
{
  printf("For loop: ");
  for (int i = 0; i < 100; i++)
  {
    printf("%d ", i);
  }
  printf("\n");
}

void whileLoop()
{
  printf("While Loop: ");
  int i = 0;
  while (i != 100)
  {
    i++;
    printf("%d ", i);
  }
  printf("\n");
}

int main(void)
{
  forLoop();
  whileLoop();
}