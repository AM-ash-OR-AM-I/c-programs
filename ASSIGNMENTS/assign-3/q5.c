// The greatest common divisor (gcd) of two integers is the product of the
// integers common factors. Write a program that inputs two numbers and
// implements the following approach to finding their gcd. We will use the
// numbers −252 and 735. Working with the numbers’ absolute values, we find the
// remainder of one divide by the other.
// 735
// 0
// 252
// - 0
// 252
// Now we calculate the remainder of the old divisor divided by the remainder
// found. 252
// 2
// 735
// - 504
// 231
// We repeat this process until the remainder is zero.
// 231
// 1
// 252
// - 231
// 21
// 21
// Ü
// -
// -
// 11
// 231
// 21
// 21
// 21
// 0