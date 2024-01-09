#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  fork();
  fork() && fork() || fork();
  fork();
  printf("guess\n");
  getchar(); // Wait for char input to meanwhile check for process tree, it also
             // shows creation of zombie processes.
  return 0;
}

/*
pstree pid 40239
─┬◆ 40239 ashutosh ./q8
 ├─┬─ 40240 ashutosh ./q8
 │ ├─┬─ 40243 ashutosh ./q8
 │ │ ├─┬─ 40250 ashutosh ./q8
 │ │ │ └─── 40258 ashutosh ./q8
 │ │ └─── 40254 ashutosh ./q8
 │ ├─┬─ 40246 ashutosh ./q8
 │ │ ├─┬─ 40252 ashutosh ./q8
 │ │ │ └─── 40257 ashutosh ./q8
 │ │ └─── 40256 ashutosh ./q8
 │ └─── 40249 ashutosh ./q8
 ├─┬─ 40241 ashutosh ./q8
 │ ├─┬─ 40245 ashutosh ./q8
 │ │ └─── 40253 ashutosh ./q8
 │ └─── 40248 ashutosh ./q8
 ├─┬─ 40242 ashutosh ./q8
 │ ├─┬─ 40247 ashutosh ./q8
 │ │ └─── 40255 ashutosh ./q8
 │ └─── 40251 ashutosh ./q8
 └─── 40244 ashutosh ./q8
*/