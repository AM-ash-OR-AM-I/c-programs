#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  fork();
  fork() + fork();
  fork();
  printf("doing!\n");
  getchar();
  return 0;
}

/*
OP:
❯ pstree pid 39491
─┬◆ 39491 ashutosh ./q6
 ├─┬─ 39492 ashutosh ./q6
 │ ├─┬─ 39496 ashutosh ./q6
 │ │ ├─┬─ 39503 ashutosh ./q6
 │ │ │ └─── 39506 ashutosh ./q6
 │ │ └─── 39505 ashutosh ./q6
 │ ├─┬─ 39498 ashutosh ./q6
 │ │ └─── 39504 ashutosh ./q6
 │ └─── 39502 ashutosh ./q6
 ├─┬─ 39493 ashutosh ./q6
 │ ├─┬─ 39497 ashutosh ./q6
 │ │ └─── 39501 ashutosh ./q6
 │ └─── 39500 ashutosh ./q6
 ├─┬─ 39494 ashutosh ./q6
 │ └─── 39499 ashutosh ./q6
 └─── 39495 ashutosh ./q6
*/