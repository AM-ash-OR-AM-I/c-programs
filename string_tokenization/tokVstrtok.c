#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[] = "ITER-IBCS-SOA-SUM-ids";
  char ptr[] = "iter-ibcs-soa-sum-ids-CSE";
  char *ptoken, *token, *savePtr;
  token = strtok(str, "-");
  ptoken = strtok_r(ptr, "-", &savePtr);
  while (ptoken != NULL) {
    printf("Token=%s--%s\n", token, ptoken);
    // printf("Remaining=%s\n", savePtr);
    token = strtok(NULL, "-");
    ptoken = strtok_r(NULL, "-", &savePtr);
  }
  return 0;
}