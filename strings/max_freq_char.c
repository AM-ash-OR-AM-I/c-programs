#include <stdio.h>

void printMaxFreqChar(char *sentence) {
  int freq[256] = {0};
  int max_freq = 0;
  char max_char = *sentence;
  char *char_pointer = sentence;
  while (*char_pointer != '\0') {
    int ascii = (int)*char_pointer;
    freq[ascii]++;
    if (freq[ascii] > max_freq) {
      max_freq = freq[ascii];
      max_char = *char_pointer;
    }
    char_pointer++;
  }
  printf("Max freq char is %c, with freq %d", max_char, max_freq);
}

int main() {
  int n = 20;
  char sentence[n];
  printf("Enter the sentence: ");
  fgets(sentence, n, stdin);
  printMaxFreqChar(sentence);
}