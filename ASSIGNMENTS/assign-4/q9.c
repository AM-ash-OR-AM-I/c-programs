// Write the prototype for a function called script that has three input
// parameters. The first parameter will be the number of spaces to display at
// the beginning of a line. The second parameter will be the character to
// display after the spaces, and the third parameter will be the number of times
// to display the second parameter on the same line and return type of the
// function is of integer.

#include <stdio.h>

int script(int noOfSpaces, char displayChar, int repetition) {
  for (int i = 0; i < noOfSpaces; i++)
    printf(" ");
  for (int i = 0; i < noOfSpaces; i++)
    printf("%c", displayChar);
}

int main() { script(5, 'a', 7); }