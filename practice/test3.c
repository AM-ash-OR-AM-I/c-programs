#include <stdio.h>
#include <string.h>

int main() {
  char pres[25] = "Adams,John Qunicy";
  char tmp1[25], tmp2[25];
  strncpy(tmp1, &pres[7], 4);
  tmp1[4] = '\0';
  strcat(tmp1, " ");
  strncpy(tmp2, pres, 5);
  tmp2[5] = '\0';
  printf("%s\n", strcat(tmp1, tmp2));
}