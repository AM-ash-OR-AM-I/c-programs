// Write a program to process a collection of scores obtained by students of a
// class of certain strength. Your program should count and print the number of
// students with Grade A ( 80 and higher), Grade B(65-79), Grade C(40-64) and
// Grade F(39 and below). Ensure that the entered scores must remain in between
// 0 and 100(inclusive). Test your program on the following data:
// 8
// 23 67 65 12
// 89 32 17 45
// 41 58 60 78
// 82 88 19 22
// 70 88 41 89
// 78 79 72 68
// 74 59 75 81
// 44 59 23 12

#include <stdio.h>

int main() {
  int a = 0, b = 0, c = 0, f = 0;
  int score;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &score);
      if (score < 0 || score > 100) {
        printf("Invalid score %d at index %d\n", score, i);
        return 1;
      }
      if (score >= 80) {
        a++;
      } else if (score >= 65) {
        b++;
      } else if (score >= 40) {
        c++;
      } else {
        f++;
      }
    }
  }
  printf("A: %d\nB: %d\nC: %d\nF: %d\n", a, b, c, f);
  return 0;
}