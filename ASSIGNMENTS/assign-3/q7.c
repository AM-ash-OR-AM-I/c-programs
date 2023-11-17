// A baseball player’s batting average is calculated as the number of hits
// divided by the official number of at-bats. In calculating official at-bats,
// walks, sacrifices, and occasions when hit by the pitch are not counted. Write
// a program that takes an input file containing player numbers and batting
// records. Trips to the plate are coded in the batting record as follows:
// H-hit, O-out, W-walk, S-sacrifice, P-hit by pitch. The program should output
// for each player the input data followed by the batting average. Each batting
// record is followed by a newline character. Your program should not use any
// kind of array and array processing

#include <stdio.h>

int main() {
  int player, hits, outs, walks, sacrifices, hit_by_pitch;
  while (scanf("%d", &player) != EOF) {
    hits = 0;
    outs = 0;
    char c;
    char record[20];
    int i = 0;
    while ((c = getchar()) != '\n') {
      *(record + i++) = c;
      switch (c) {
      case 'H':
        hits++;
        break;
      case 'O':
        outs++;
        break;
      default:
        break;
      }
    }
    printf("Player %d's Record:%s\n", player, record);
    printf("Batting average: %f\n", (float)hits / (hits + outs));
  }
  return 0;
}