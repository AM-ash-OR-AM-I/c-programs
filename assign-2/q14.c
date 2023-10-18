/*
14. particular cell phone plan includes 50 minutes of air time and 50 text
messages for $15.00 a month. Each additional minute of air time costs $0.25,
while additional text messages cost $0.15 each. All cell phone bills include an
additional charge of $0.44 to support 911 call centers, and the entire bill
(including the 911 charge) is subject to 5 percent sales tax.
Write a program that reads the number of minutes and text messages used in a
month from the user. Display the base charge, additional minutes charge (if
any), additional text message charge (if any), the 911 fee, tax and total bill
amount. Only display the additional minute and text message charges if the user
incurred costs in these categories. Ensure that all of the charges are displayed
using 2 decimal places*/

#include <stdio.h>

int main() {
  int minutes, texts;
  printf("Enter number of minutes and texts: ");
  scanf("%d %d", &minutes, &texts);
  float baseCharge = 15.0;
  float additionalMinutesCharge = 0.0;
  float additionalTextsCharge = 0.0;
  float fee911 = 0.44;
  float tax = 0.05;
  if (minutes > 50) {
    additionalMinutesCharge = (minutes - 50) * 0.25;
  }
  if (texts > 50) {
    additionalTextsCharge = (texts - 50) * 0.15;
  }
  float total =
      (baseCharge + additionalMinutesCharge + additionalTextsCharge + fee911) *
      (tax + 1);
  printf("Base charge: $%.2f\n", baseCharge);
  if (additionalMinutesCharge > 0) {
    printf("Additional minutes charge: $%.2f\n", additionalMinutesCharge);
  }
  if (additionalTextsCharge > 0) {
    printf("Additional texts charge: $%.2f\n", additionalTextsCharge);
  }
  printf("911 fee: $%.2f\n", fee911);
  printf("Tax: $%.2f\n", (baseCharge + additionalMinutesCharge +
                          additionalTextsCharge + fee911) *
                             tax);
  printf("Total: $%.2f\n", total);
}