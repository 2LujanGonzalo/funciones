#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int N_random(int a, int b){
  return (random() % (b - a + 1)+ a);
}


int main(int argc, char  *argv[]) {
  srand(time(NULL));
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);

  printf("%d\n",N_random(a,b));
  return 0;
}
