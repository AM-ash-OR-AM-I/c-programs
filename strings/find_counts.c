#include <stdio.h>

void getCounts(char *string) {
  int chr, dig, spc;
  chr = dig = spc = 0;

  char *pointer = string;
  while (*pointer != '\0') {
    char x = *pointer;
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
      chr++;
    } else if (x >= '0' && x <= '9') {
      dig++;
    } else {
      spc++;
    }
    pointer++;
  }
  printf("Count of alphabets: %d, digits: %d, special characters: %d\n", chr,
         dig, spc);
}

void findVowels(char *string) {
  int cons = 0, vows = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    if ((string[i] >= 'a' && string[i] <= 'z') ||
        (string[i] >= 'A' && string[i] <= 'Z')) {
      char vowels[] = "aeiouAEIOU";
      int vowel_found = 0;
      for (int j = 0; j < 10 && !vowel_found; j++) {
        vowel_found = vowels[j] == string[i];
      }
      vows += vowel_found;
      cons += !vowel_found;
    }
  }
  printf("Vowels: %d, Consonants: %d", vows, cons);
}

int main() {
  char string[30];
  printf("Enter string:");
  scanf("%s", string);
  getCounts(string);
  findVowels(string);
}