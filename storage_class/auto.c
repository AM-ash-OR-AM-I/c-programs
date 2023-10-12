# include <stdio.h>

void auto_stor1(){
  auto int i, j;
  printf("\n%d %d", i, j);
}

void auto_store2(){
  auto int i = 1;
  {
    auto int i= 2;
    {
      auto int i=3;
      {
        auto int i=4;
        printf("\n%d", i);
      }
      printf("\n%d", i);
    }
    printf("\n%d", i); 
  }
  printf("\n%d", i);
}

int main(){
  auto_stor1();
  auto_store2();
}

