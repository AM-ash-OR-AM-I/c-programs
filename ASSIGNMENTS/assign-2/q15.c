/*
15. Write a program that determines the day number (1 to 366) in a year for a
date that is provided as input data. As an example, January 1, 1994, is day 1.
December 31, 1993, is day 365. December 31, 1996, is day 366, since 1996 is a
leap year. A year is a leap year if it is divisible by four, except that any
year divisible by 100 is a leap year only if it is divisible by 400. Your
program should accept the month, day, and year as integers. Include a function
leap that returns 1 if called with a leap year, 0 otherwise.
*/

#include <stdio.h>

int isLeapYear(int year) {
  return (year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0;
}

int main() {
  int day, month, year;
  printf("Enter day, month, year: ");
  scanf("%d %d %d", &day, &month, &year);
  int months[12] = {
      31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int dayNumber = 0;
  for (int i = 0; i < month - 1; i++) {
    dayNumber += months[i];
  }
  dayNumber += day;
  printf("Day number: %d\n", dayNumber);
}