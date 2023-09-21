# include <stdio.h>
# include <math.h>

// use -lm flag to link math library, while compilation.
// or use g++ (c++) compiler that auto links.
int main(void) {
    float a, b, c, d, root1, root2;
    printf("Enter values for a, b and c: ");
    scanf("%f%f%f",&a, &b, &c);
    d = pow(b,2) - (4*a*c);
    if (d>0){
        root1 = (-b+sqrt(d))/(2*a);
        root2 = (-b-sqrt(d))/(2*a);
        printf("Root1 = %.2f, root2 = %.2f\n", root1, root2);
    } else {
        printf("No roots\n");
    }
}