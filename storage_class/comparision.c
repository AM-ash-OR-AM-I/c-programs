# include <stdio.h>
# include <time.h>

int iters = 1000000000;

void reg_time(){
  int time_taken;
  time_t initial_time = time(NULL);
  register int i = 324, j;
  while(i<iters) i++;
  time_taken = time(NULL) - initial_time;
  printf("Time taken by register = %d\n", time_taken);
}

void auto_time(){
  int time_taken;
  time_t initial_time = time(NULL);
  auto int i = 324, j;
  while (i<iters) i++;
  time_taken = time(NULL) - initial_time;
  printf("Time taken by auto = %d\n", time_taken);
}

void static_increment(){
  // initialized only once
  static int i = 1;
  i++;
  printf("%d ", i);
}

void auto_increment(){
  auto int i = 1;
  i++;
  printf("%d", i);
}

void extern_test(){
  int iters = 5;
  {
    extern int iters;
    printf("Global var %d\n", iters);
  }
  printf("Local var %d\n", iters);
}

int main(){ 
  // auto_time();
  // reg_time();
  // for (int i=0; i<10; i++){
  //  static_increment();
  //  auto_increment();
  //  printf("\n");
  // }
  extern_test();
}
