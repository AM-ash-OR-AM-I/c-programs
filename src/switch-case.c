# include <stdio.h>
void main() {
    char letter;
    printf("Enter a letter from a -> c: ");
    scanf("%c", &letter);
    switch (letter) {
        case 'a': printf("Ashutosh\n");break;
        case 'b': printf("Baseball\n"); break;
        default: printf("NoIdea\n"); break;
    }
}