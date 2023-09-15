# include <stdio.h>
// Design a calculator

void main() {
    char op;
    int x, y;
    printf("Enter the x and y, operator: ");
    scanf("%d %d %c", &x, &y, &op);
    switch (op) {
        case '+': printf("%d\n", x+y); break;
        case '-': printf("%d\n", x-y); break;
        case '*': printf("%d\n", x*y); break;
        case '/': printf("%f\n", (float) x/y); break;
        default: break;
    }
}
