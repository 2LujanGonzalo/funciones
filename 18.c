#include <stdio.h>
#include <stdlib.h>

int factorial(int a) {
  if (a == 0) return 1;
  return factorial(a - 1) * a;
}

int main(int argc, char  *argv[]) {
  int a=atoi(argv[1]);
  printf("%d\n",factorial(a));
  return 0;
}
