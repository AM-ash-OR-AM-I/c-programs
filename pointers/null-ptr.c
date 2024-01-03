#include <stdio.h>

void void_pointer() {
  int x = 32432;
  void *ptr = &x;
  printf("%o", *(int *)ptr);
}

void null_pointer() {
  int *ptr = NULL;
  printf("%d", *ptr);
}

/*
Uninitialized pointers are known as wild pointers because they point to some
arbitrary memory location and may cause a program to crash or behave
unexpectedly.
*/
void wild_pointer() {
  int *ptr;
  /* Some unknown memory location is being corrupted.
    This should never be done. */
  *ptr = 32523;
  printf("%d", *ptr);
}

void constant_pointer() {
  int age = 235324;
  int const *ptr = &age;
  ptr = &age;
  printf("%d", *ptr);
}

int function(int n) { printf("%d\n", n); }
void function_pointer() {
  void (*ptr)(int);
  ptr = &function;
  (*ptr)(10);  
}

void func1() { printf("Hello World func1\n"); }

void func2() { printf("Hello World func2\n"); }

void wrapper(void (*func)()) {
  printf("This is the wrapper entry\n");
  func();
  printf("This is wrapper exit\n");
}

int main() {
  // int_pointer();
  // void_pointer();
  wild_pointer();
  // constant_pointer();
  // function_pointer();
  // wrapper(func1);
  // wrapper(func2);
}