# include<stdio.h>
// Don't give semicolons in define or include statements
# define KMS_PER_MILE 1.069f
void main(){
	float m, k;
	printf("Enter the value:");
	scanf("%f",&m);
	k = KMS_PER_MILE*m;
	printf("%f\n", k);
}
