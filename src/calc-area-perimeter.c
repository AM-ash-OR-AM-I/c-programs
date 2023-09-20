# include <stdio.h>
# define PI 3.14159265358979323846f
void main() {
	float r, circum, area;
	printf("Enter the radius: " );
	scanf("%f",&r);
	circum = 2*PI*r;
	area = PI*r*r;
	printf("Area = %f, circumference = %f\n", area, circum);
}
