# include <stdio.h>

void odd(int, int);

void even(int x, int n){
  if (x==n+1) return; 
  printf("%d ", x-1);
  odd(x+1, n);
}

void odd(int x, int n){
  if (x==n+1) return; 
  printf("%d ", x+1);
  even(x+1, n);
}

int main(){
  int n;
  printf("Enter the number n: ");
  scanf("%d", &n);
  odd(1, n);
}
