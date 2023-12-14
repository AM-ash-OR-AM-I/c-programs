#include <stdio.h>
#include <string.h>

struct struct_example {
  int integer;
  float decimal;
  char name[20];
};

// Anyone of them can be assigned/used at a time
union union_example {
  int integer;
  float decimal;
  char name[20];
};

void main() {
  struct struct_example s = {18, 38, "geeksforgeeks"};
  union union_example u = {18, 38,
                           "geeksforgeeks"}; // Only first member gets assigned

  printf("Initializing members:\n");
  printf("Structure:\n\tInteger: %d\n\t"
         "decimal: %.2f\n\tname: %s\n",
         s.integer, s.decimal, s.name);
  printf("\nUnion:\n\tinteger: %d\n\t"
         "decimal: %.2f\n\tname: %s\n",
         u.integer, u.decimal, u.name);

  printf("\nsizeof structure : %d\n", sizeof(s));
  printf(
      "sizeof union : %d\n",
      sizeof(u)); // Maxsize of the member will be size of union (20 bytes) name

  printf("\nAccessing all members at a time:\n");
  s.integer = 183;
  s.decimal = 90;
  strcpy(s.name, "new val");

  printf("Structure:\n\tInteger: %d\n\t"
         "decimal: %.2f\n\tname: %s\n",
         s.integer, s.decimal, s.name);

  u.integer = 183;                 // Modified
  u.decimal = 90;                  // Modified, prev erased
  strcpy(u.name, "geeksforgeeks"); // Modified, prev erased

  printf("\nUnion:\n\tinteger: %d\n\t"
         "decimal: %.2f\n\tname: %s\n",
         u.integer, u.decimal, u.name);

  printf("\nAccessing one member at time:");

  printf("\nStructure:");
  s.integer = 240;
  printf("\n\tinteger: %d", s.integer);

  s.decimal = 120;
  printf("\n\tdecimal: %f", s.decimal);

  strcpy(s.name, "C programming");
  printf("\n\tname: %s\n", s.name);

  printf("\nUnion:");
  u.integer = 240;
  printf("\n\tinteger: %d", u.integer);

  u.decimal = 120;
  printf("\n\tdecimal: %f", u.decimal);

  strcpy(u.name, "C programming");
  printf("\n\tname: %s\n", u.name);

  // difference four
  printf("\nAltering a member value:\n");
  s.integer = 1218;
  printf("Structure:\n\tInteger: %d\n\t"
         "decimal: %.2f\n\tname: %s\n",
         s.integer, s.decimal, s.name);

  u.integer = 1218;
  printf("\nUnion:\n\tinteger: %d\n\t"
         "decimal: %.2f\n\tname: %s\n",
         u.integer, u.decimal, u.name);
}