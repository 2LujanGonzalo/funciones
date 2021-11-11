#include <stdio.h>
#include <stdlib.h>
int factorial(int a){
  int j=1;
  for (int i = 1; i < a+1; i++) {
    j*=i;

  }
  return j;
}


int main(int argc, char  *argv[]) {
  int a=atoi(argv[1]);
  printf("%d\n",factorial(a) );
    return 0;
}
