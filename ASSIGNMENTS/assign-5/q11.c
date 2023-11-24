// The binary search algorithm that follows may be used to search an array when
// the elements are in order. The algorithm for binary search given as;
// 1. Let bottom be the subscript of the initial array element.
// 2. Let top be the subscript of the last array element.
// 3. Let found be false.
// 4. Repeat as long as bottom isn’t greater than top and the target has not
// been found
// 5. Let middle be the subscript of the element halfway between bottom and top.
// 6. if the element at middle is the target
// 7. Set found to true and index to middle.
// else if the element at middle is larger than the target
// 8. Let top be middle - 1.
// else
// 9. Let bottom be middle + 1.
// Write and test a function binary srch that implements this algorithm for an
// array of integers. When there is a large number of array elements, which
// function do you think is faster: binary srch or the linear search algorithm

#include <stdio.h>

