// A barcode scanner for Universal Product Codes (UPCs) verifies the 12-digit
// code scanned by com- paring the code’s last digit (called a check digit ) to
// its own computation of the check digit from the first 11 digits as follows:
// (1) Calculate the sum of the digits in the odd-numbered positions (the first,
// third, ..., eleventh digits) and multiply this sum by 3. (2) Calculate the
// sum of the digits in the even-numbered positions (the second, fourth, ...,
// tenth digits) and add this to the previous result. (3) If the last digit of
// the result from step 2 is 0, then 0 is the check digit. Otherwise, subtract
// the last digit from 10 to calculate the check digit. (4) If the check digit
// matches the final digit of the 12-digit UPC, the UPC is assumed correct.
// Write a program that prompts the user to enter the 12 digits of a barcode
// separated by spaces. The program should store the digits in an integer array,
// calculate the check digit, and compare it to the final barcode digit. If the
// digits match, output the barcode with the message ”validated“. If not, output
// the barcode with the message ”error in barcode”. Also, output with labels the
// results from steps 1 and 2 of the check-digit calculations. Note that the
// “first” digit of the barcode will be stored in element 0 of the array. Try
// your program on the following barcodes, three of which are valid. For the
// first barcode, the result from step 2 is 79 (0 + 9 + 0 + 8 + 4 + 0) * 3 + (7
// + 4 + 0 + 0 + 5). 0 7 9 4 0 0 8 0 4 5 0 1 0 2 4 0 0 0 1 6 2 8 6 0 0 1 1 1 1 0
// 8 5 6 8 0 7 0 5 1 0 0 0 1 3 8 1 0 1

#include <stdio.h>

int main() {
  int arr[12];
  printf("Enter 12 digits of a barcode separated by spaces: ");
  for (int i = 0; i < 12; i++) {
    scanf("%d", &arr[i]);
  }

  int sumOdd = 0, sumEven = 0;
  for (int i = 0; i < 11; i++) {
    if (i % 2 == 0) {
      sumOdd += arr[i];
    } else {
      sumEven += arr[i];
    }
  }

  sumOdd *= 3;
  sumEven += sumOdd;

  int checkDigit = 0;
  if (sumEven % 10 == 0) {
    checkDigit = 0;
  } else {
    checkDigit = 10 - (sumEven % 10);
  }

  if (checkDigit == arr[11]) {
    printf("Barcode validated");
  } else {
    printf("Error in barcode");
  }
}