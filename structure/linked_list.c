#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

int main() {
  struct node start;
  start.data = 324;
  start.link = NULL;
  struct node *curNode = &start;

  for (int i = 0; i < 10; i++) {
    struct node *newNode = malloc(sizeof(int) + 4);
    newNode->data = rand() % 255;
    newNode->link = NULL;
    curNode->link = newNode;
    printf("Before assigning: %p %d -> %p\n", curNode, curNode->data,
           curNode->link);
    curNode = newNode;
  }

  curNode = &start;

  printf("LinkedList: \n");
  while (curNode->link != NULL) {
    printf("%d -> ", curNode->data);
    curNode = curNode->link;
  }
  printf("%d", curNode->data);
}