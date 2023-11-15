#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *nextNode;
};

void displayLinkedList(struct node *curNode) {
  printf("LinkedList: \n");
  while (curNode->nextNode != NULL) {
    printf("%d -> ", curNode->data);
    curNode = curNode->nextNode;
  }
  printf("%d", curNode->data);
}

int main() {
  printf("Enter length of linkedlist: ");
  int length;
  scanf("%d", &length);

  printf("Enter elements of linkedlist: ");
  struct node start;
  scanf("%d", &start.data);
  start.nextNode = NULL;
  struct node *curNode = &start;
  for (int i = 0; i < length - 1; i++) {
    struct node *newNode = malloc(sizeof(int) + 4);
    scanf("%d", &newNode->data);
    newNode->nextNode = NULL;
    curNode->nextNode = newNode;
    // printf("Before assigning: %p %d -> %p\n", curNode, curNode->data,
    //        curNode->link);
    curNode = newNode;
  }

  displayLinkedList(&start);
}