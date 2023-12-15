#include <stdio.h>

struct person {
  int ht;
  float wt;
  char color;
  // struct person p1;  This doesn't work.
};

struct person1 {
  int ht;
  float wt;
  char color;
  struct person1 *pointer;
}; // This works.

struct person2 {
  int ht;
  float wt;
  char color;
  struct nestedperson2 {
    int num;
    float f;
  } nestedp;
}; // This works as well..

int main() {
  struct person1 p = {1, 2.5, 'C'};
  struct person1 *pointer2 = &p;
  p.pointer = pointer2;
  printf("%d %f %c %d\n", p.ht, p.wt, p.color, p.pointer->wt);
  struct person2 p2 = {1, 4, 'X', {2, 2.5}};
  printf("%d %f %c %d\n", p2.ht, p2.wt, p2.color, p2.nestedp.num);
}