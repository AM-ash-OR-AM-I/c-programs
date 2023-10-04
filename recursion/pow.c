# include <stdio.h>

int power(int x, int n){
  if (n==0) return 1;
  return x*power(x, n-1);
}

int main(){
  int x, n;
  printf("Enter the number and its power: ");
  scanf("%d %d", &x, &n);
  int res = power(x, n);
  printf("%d", res);
}
