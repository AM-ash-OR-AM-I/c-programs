# include <stdio.h>
void main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x&1) {
        printf("%d is odd\n", x);
    } else {
        printf("%d is even\n", x);
    }
}