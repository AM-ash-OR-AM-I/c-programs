# include <stdio.h>

int findGCD(int a, int b) {
    if (b==0){
        return a;
    }
    return findGCD(b, a%b);
}

int main() {
    int a, b;
    printf("Enter two numbers a, b:");
    scanf("%d %d", &a, &b);
    int gcd = findGCD(a, b);
    printf("GCD = %d\n", gcd);
}