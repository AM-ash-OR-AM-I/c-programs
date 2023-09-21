# C

## Code syntax

### Main function

```c
void main() {
    // code
}
```

### Header files

```c
#include <stdio.h>
```

### Input and output

```c
#include <stdio.h>

void main() {
  int n;
  scanf("%d", &n);
  printf("Hello world!\n");
}
```

## Structure in C

```c
struct name {
    type member;
    type member;
    ...
};
```

e.g.

```c
struct point {
    int x;
    int y;
    double area;
};
```

- `struct point` is the name of the structure
- It occupies 4 + 4 + 8 = 16 bytes of memory
