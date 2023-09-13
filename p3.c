// Take 3 numbers as input and print it in the output
# include <stdio.h>
void main() {
	int a,b;
	char ch;
	printf("Enter the two numbers: ");
	// Take char as input in beginning
	scanf("%c", &ch);
	scanf("%d %d", &a, &b);
	printf("%c\n", ch);
	printf("%d\n", a+b);
}
