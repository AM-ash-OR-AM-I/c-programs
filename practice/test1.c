// Sort arguments in ascending order
#include <stdio.h>

void arrange(int *a, int *b);

int main() {
  int argv[6];
  printf("Enter 6 arguments: ");
  for (int i = 0; i < 6; i++) {
    scanf("%d", &argv[i]);
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6 - i; j++) {

      arrange(&argv[j], &argv[j + 1]);
    }
  }

  for (int i = 0; i < 6; i++) {
    printf("%d ", argv[i]);
  }
}

void arrange(int *a, int *b) {
  if (*a > *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
}
// void arrange()
