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
```

### Storage classes in c

![Storage class](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Storage-Classes-In-C.png)

- Auto (Used by default)
    - Slowest access
    - Stored in stack

```c
auto int a = 32; 
```

- Register
    - Fastest access
    - Used for variables that are accessed more times during program

```c
register int x = 324;
```

- Static 
    - Faster than auto
    - Uses data segment
    - Initialized only one during compilation

```c
static int x=324;
```

- Extern
  - Global variables
    ```c
    int x = 324;
    int main(){
        extern int val;
        printf("Global var %d", val);
    }
    ```


## Process
### fork()
- Clone the calling process, creating an exact copy.
Return -1 for errors, 0 to the new process (child process), and the process ID of the new process to the old process.

### wait()
