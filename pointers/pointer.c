#include <stdio.h>

void func1()
{
  int age = 34;
  int *pointer1 = &age; // int pointer2 = &pointer; Invlid conversion
  int **pointer2 = &pointer1;
  int ***pointer3 = &pointer2;
  printf("Age = %d\n", age);
  printf("Address of age = %p, value of pointer = %p\n", &age, pointer1);
  printf("Address of pointer1 = %p, value of pointer2 = %p\n", &pointer1, pointer2);
  printf("Dereferenced pointer = %d\n", *pointer1);
  printf("Dereferenced pointer2 = %p\n", *pointer2);
  printf("Dereferenced pointer2 twice = %d\n", **pointer2);
  printf("Dereferenced pointer3 twice = %d\n", **pointer3);
  printf("Dereferenced pointer3 thrice = %d\n", ***pointer3);
}

void getSizeOfPointers()
{
  int a = 10;
  int b = 'a';
  float c = 10.5;
  int *p1 = &a;
  int *p2 = &b;
  printf("Size of int = %d\n", sizeof(int));
  printf("Size of pointer = %d\n", sizeof(p1));
  printf("Size of char = %d\n", sizeof(char));
  printf("Size of pointer = %d\n", sizeof(p2));
  printf("Size of float = %d\n", sizeof(float));
  printf("Size of pointer = %d\n", sizeof(&c));
}

void test()
{
  int i = 10;
  float x = 10.5;
  double d = 20.5;
  char c = 'a';
  printf("integer:%ld bytes\n", sizeof(int));
  printf("float:%ld bytes\n", sizeof(float));
  printf("double:%ld bytes\n", sizeof(double));
  printf("character:%ld bytes\n", sizeof(char));
}

int main()
{
  test();
  return 0;
}
