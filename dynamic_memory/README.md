# Dynamic Memory Allocation

## Malloc

- It occupies a block of memory of the specified size.
- Returns a pointer of type void which can be cast into a pointer of any form.

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
  int n = 15;
  int *ptr;
  ptr = (int *)malloc(n * sizeof(int));
  if (ptr == NULL) {
    printf("Memory not allocated.\n");
  } else {
    printf("Memory successfully allocated using malloc.\n");
    free(ptr);
  }
  return 0;
}
```

- Why malloc instead of something like this?
- `int n = 15;`
- `int numbers[n];`
- This stores the array in the *stack*, which is limited in size. Malloc stores it in the *heap*, which is much larger.

## Calloc

- It initializes each block with a default value ‘0’.
- It returns a pointer to the memory block allocated by the function.
- It is used to allocate memory to arrays.

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
  int n = 15;
  int *ptr;
  printf("Enter number of elements: %d\n", n);
  ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL) {
    printf("Memory not allocated.\n");
  } else {
    printf("Memory successfully allocated using calloc.\n");
    free(ptr);
  }
  return 0;
}
```
