/*
Keiths Sheet Music needs a program to implement its music teachers discount
policy. The program is to prompt the user to enter the purchase total and to
indicate whether the purchaser is a teacher. The store plans to give each
customer a printed receipt, so your program is to create a nicely formatted file
called receipt.txt. Music teachers receive a 10% discount on their sheet music
purchases unless the purchase total is $100 or higher. In that case, the
discount is 12%. The discount calculation occurs before addition of the 5% sales
tax. Here are two sample output filesone for a teacher and one for a nonteacher.
Total purchases $122.00
Teacher’s discount (12%) 14.64
Discounted total 107.36
Sales tax (5%) 5.37
Total $112.73
Total purchases $24.90
Sales tax (5%) 1.25
Total $26.15
Note: to display a % sign, place two % signs in the format string:
printf("%d%%", SALES_TAX);

To write the output in the file receipt.txt use output redirection, ./a.out >
receipt.txt
*/

#include <stdio.h>

int main() {
  float totalPurchases;
  printf("Enter total purchases: ");
  scanf("%f", &totalPurchases);
  int isTeacher;
  printf("Are you a teacher? (1/0): ");
  scanf("%d", &isTeacher);
  float discount = 0.1;
  if (totalPurchases >= 100) {
    discount = 0.12;
  }
  float discountedTotal = totalPurchases - (totalPurchases * discount);
  float salesTax = discountedTotal * 0.05;
  float total = discountedTotal + salesTax;

  // To write the output in the file receipt.txt use output redirection, ./a.out
  // > receipt.txt
  printf("Total purchases $%.2f\n", totalPurchases);
  if (isTeacher) {
    printf("Teacher's discount (%.0f%%) $%.2f\n", discount * 100,
           totalPurchases * discount);
  }
  printf("Discounted total $%.2f\n", discountedTotal);
  printf("Sales tax (5%%) $%.2f\n", salesTax);
  printf("Total $%.2f\n", total);
}