#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int potencia(int n){return pow(2,n);}

int main(int argc, char  *argv[]) {
int n=atoi(argv[1]);
printf("%d\n",potencia(n));
  return 0;
}
