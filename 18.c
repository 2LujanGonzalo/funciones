#include <stdio.h>
#include <stdlib.h>
int factorial(int a){
while (a!=0) {
  return factorial((a-1)*a);
}
}


int main(int argc, char  *argv[]) {
  int a=atoi(argv[1]);
  printf("%d\n",factorial(a));
  return 0;
}
