#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data {
  int id;
  char name[20];
};

int main() {
  struct data datas[10];
  char name[20] = "Hello";
  for (int i = 0; i < 10; i++) {
    datas[i].id = rand() % 255; // Generate a random id
    strcpy(datas[i].name, name);
  }

  for (int i = 0; i < 10; i++) {
    printf("id = %d, name = %s\n", datas[i].id, datas[i].name);
  }
}