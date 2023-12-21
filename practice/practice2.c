#include <stdio.h>
int main() {
  struct s1 {
    char *z;
    int i;
    struct s1 *p;
  };

  struct s1 a[] = {{"SO", 1, a + 1}, {"IT", 4, a + 2}, {"GO", 5, a}};
  struct s1 *ptr = a;
  printf("%s%s", a[0].z, a[1].z);
  printf("%s%d\n", (*ptr).z, (++ptr)->i);
  return 0;
}