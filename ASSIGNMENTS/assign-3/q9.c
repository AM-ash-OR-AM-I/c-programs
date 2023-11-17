// Design a C program to display the following pattern;
// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A

#include <stdio.h>

int main() {
  for (int i = 0; i < 7; i++) {
    char c = 'A';
    for (int j = 65; j < 72 - i; j++) {
      printf("%c ", j);
    }
    for (int j = 0; j < i; j++) {
      printf("    ");
    }
    for (int j = 72; j > 65 + i; j--) {
      printf("%c ", j);
    }
    printf("\n");
  }
}