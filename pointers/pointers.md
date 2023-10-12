# Pointers

## What is a pointer?

A pointer is a variable that stores the address of another variable. In other words, a pointer points to the location of a variable in memory. Pointers are useful for several reasons:

- They allow us to pass variables to functions by reference, rather than by value.
- They allow us to dynamically allocate memory.
- They allow us to create complex data structures such as linked lists, trees, etc.
- They allow us to access hardware directly.

e.g.

```c
int value = 10;
int *pointer = &value;
```

| Void pointer | Null Pointer |
| ------------ | ------------ |
| Doesn't store datatype | Stores null value location |