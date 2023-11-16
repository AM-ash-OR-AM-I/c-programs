#include <stdio.h>

typedef struct StudentStruct
{
  int regNo;
  float marks;
  char section;
} Student;

typedef struct Student
{
  int regNo;
  float marks;
  char section;
} Student2;

union Student1
{
  int regNo;
  float marks;
  char section;
};

void main()
{

  Student details = {94, 234.432, 'K'};

  // Student2 student;


  union Student1 s1;
  s1.marks = 94.2;
  s1.regNo = 1132300;
  s1.section = 'k';

  printf("RegNo: %d, Marks: %.2f, Section: %c\n", details.regNo, details.marks, details.section);
  printf("RegNo: %d, Marks: %.2f, Section: %c\n", s1.regNo, s1.marks, s1.section);
  printf("%d", sizeof(union Student1));
}
