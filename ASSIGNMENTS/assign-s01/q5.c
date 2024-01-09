#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  fork();
  fork() && fork();
  fork();
  printf("Got!!!\n");
  getchar();
  return 0;
}

/*
❯ pstree pid 39035
─┬◆ 39035 ashutosh ./q5
 ├─┬─ 39036 ashutosh ./q5
 │ ├─┬─ 39039 ashutosh ./q5
 │ │ └─── 39045 ashutosh ./q5
 │ ├─┬─ 39042 ashutosh ./q5
 │ │ └─── 39046 ashutosh ./q5
 │ └─── 39044 ashutosh ./q5
 ├─┬─ 39037 ashutosh ./q5
 │ └─── 39041 ashutosh ./q5
 ├─┬─ 39038 ashutosh ./q5
 │ └─── 39043 ashutosh ./q5
 └─── 39040 ashutosh ./q5
*/