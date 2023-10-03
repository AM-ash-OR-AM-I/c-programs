# include <stdio.h>

int main(){
  int num1=0,num2=0,num3=0;
  printf("Enter the number as <345678>:");
  scanf("%1d%2d%3d",&num1,&num2,&num3);
  num1=num1+num2+num3;
  printf("%d\n",num1);
  return 0;
}
