// Write a program to process a collection of the speeds of vehicles. Your
// program should count and print the number of vehicles moving at a high speed
// (90 miles/hour or higher), the number of vehicles moving at a medium speed
// (50-89 miles/hour), and the number of vehicles moving at a slow speed (less
// than 50 miles/hour). It should also display the category of each vehicle.
// Test your program on the following data in a file: 43 23 54 57 68 67 51 90 33
// 22 11 88 34 52 75 12 78 32 89 14 65 67 97 53 10 47 34 a. Also code to display
// the average speed of a category of vehicle (a real number) at the end of the
// run. b. Store the data into a file vspeed.txt. Use input redirection to read
// all numbers from that file. (i.e. ./a.out < vspeed.txt)

#include <stdio.h>

int main() {
  int high = 0, medium = 0, low = 0;
  int speed;
  while (scanf("%d", &speed) != EOF) {
    if (speed >= 90) {
      high++;
    } else if (speed >= 50) {
      medium++;
    } else {
      low++;
    }
  }
  printf("High: %d\nMedium: %d\nLow: %d\n", high, medium, low);
  return 0;
}