# C Programming

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
struct Student {
    int regNo;
    float marks;
    char section;
};
```

- `struct Student` is the name of the structure
- It occupies 4 + 8 + 4 = 16 bytes of memory

### Using typedef

```c
typedef struct Student {
    int regNo;
    float marks;
    char section;
} Student;
```

### Function declaration

```c
returnType func(type);
``
