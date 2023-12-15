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

#### Union vs Struct

```c
// All can be assigned and used at the same time
struct struct_example {
  int integer;
  float decimal;
  char name[20];
};

// Only any 1 of them can be assigned/used at a time
union union_example {
  int integer;
  float decimal;
  char name[20];
};

int main() {
  struct struct_example s;
  union union_example u;

  s.integer = 10;
  s.decimal = 10.5;
  strcpy(s.name, "Hello World!");

  u.integer = 10;
  u.decimal = 10.5;
  strcpy(u.name, "Hello World!");

  printf("struct_example: %d %f %s\n", s.integer, s.decimal, s.name);
  printf("union_example: %d %f %s\n", u.integer, u.decimal, u.name);

  return 0;
}
```

### Storage classes in c

![Storage class](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Storage-Classes-In-C.png)

- Auto (Used by default)
  - Slowest access
  - Stored in stack

    ```c
    int a = 32; 
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
  - Global variable, can be accessed from any function
  - Can be used to access global variable from another file
    - file1.c

    ```c
    int x = 324;
    int main(){
        extern int val;
        printf("Global var %d", val);
    }
    ```

    - file2.c

    ```c
    # include <stdio.h>
    # include "file1.c"
    extern int x;
    int main(){
        printf("Global var %d", x);
    }
    ```

## Pointers

- Wild pointer: pointer that has not been initialized
  - Uninitialized pointers are known as wild pointers because they point to some arbitrary memory location and may cause a program to crash or behave unexpectedly.
  
  ```c
    int *ptr;
    *ptr = 32523;
    printf("%d", *ptr);
  ```

- Dangling pointer: pointer that points to a memory location that has been deleted (or freed)
  
  ```c
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 32523;
    free(ptr);
    printf("%d", *ptr);
  ```
  
- Null pointer: pointer that has been initialized to NULL
  - NULL is a macro defined in <stdio.h> header file. It is an implementation-defined null pointer constant. It may be defined as 0 or ((void *)0). It is guaranteed that if NULL is defined as 0 then it will always be a null pointer constant.
  
  ```c
    int *ptr = NULL;
    printf("%d", *ptr);
  ```

## Process

### fork()

- Clone the calling process, creating an exact copy.
Return -1 for errors, 0 to the new process (child process), and the process ID of the new process to the old process.

### wait()

- `waitpid()` suspends execution of the calling process until a child specified by pid argument has changed state.

### Zombie Process

- When a child dies first but parent keeps running
- In process table entry the child process holds resources virtually until parent terminates.

```c
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t childPid;
  childPid = fork();

  if (childPid == 0) {
    sleep(5);
    printf("Child [pid]: %d\n", getpid());
  } else if (childPid > 0) {
    sleep(30);
    wait(NULL);
    printf("Parent [pid]: %d\n", getpid());
  }
}
```

### Orphan process

- Child is waiting but parent as finished its execution.
- Child gets assigned to another parent before process terminates.

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t childPid = fork();
  printf("pid_t: %d\n", childPid);
  if (childPid == -1) {
    printf("Fork error");
    return 1;
  } else if (childPid == 0) {
    printf("Child %d, parent %d\n", getpid(), getppid());
    sleep(5);
    printf("Child %d, parent %d\n", getpid(), getppid());
  } else {
    printf("Parent pid %d\n", getpid());
    exit(0);
  }
}
```
