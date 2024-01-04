
#include <stdio.h>
#include <string.h>
int main() {
  char str[] = "This is a new text\nIt is the second line\nthen next line";
  int totalWords = 0;
  int totalLines = 0;
  char *line = strtok(str, "\n");
  while (line != NULL) {
    char *word = strtok(line, " \t");
    while (word != NULL) {
      totalWords++;
      word = strtok(NULL, " \t");
    }
    totalLines++;
    line = strtok(NULL, "\n");
  }
  double averageWordsPerLine = (double)totalWords / totalLines;
  printf("Average number of words per line: %.2f\n", averageWordsPerLine);
  return 0;
}
