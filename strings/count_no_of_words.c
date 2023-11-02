#include <stdio.h>

int get_no_of_words(char sentence[]) {
  char *char_pointer = sentence;
  int count = 0;
  while (*char_pointer != '\0') {
    if (*char_pointer == ' ') {
      count++;
    }
    char_pointer++;
  }
  return count ? count + 1 : 0;
}

int main() {
  int n = 100;
  char sentence[n];
  printf("Enter a sentence: ");
  fgets(sentence, n, stdin);
  int count_words = get_no_of_words(sentence);
  printf("Count of words = %d", count_words);
}