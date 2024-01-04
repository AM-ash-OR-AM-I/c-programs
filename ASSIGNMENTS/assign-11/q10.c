#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char choice[3];
  while (1) {
    printf("Enter 'yes' to run a command or 'no' to exit: ");
    scanf("%s", choice);
    if (strcmp(choice, "yes") == 0) {
      char command[50];
      printf("Enter the command to run: ");
      scanf(" %[^\n]", command);
      int result = system(command); // system:-To Exit The Command
      if (result == 0) {
        printf("Command executed successfully.\n");
      } else {
        printf("Command failed to execute.\n");
      }
    } else if (strcmp(choice, "no") == 0) {
      printf("Exiting the program.\n");
      break;
    } else {
      printf("Invalid choice. Please enter 'yes' or 'no'.\n");
    }
  }
  return 0;
}