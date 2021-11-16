#include <stdlib.h>
#include <stdio.h>

void fibo(int n){

int fibonacci[n];
fibonacci[0]=0;
fibonacci[1]=1;
for (int i = 2; i < n; i++) {
fibonacci[i]= fibonacci[i-1]+fibonacci[i-2];
}
for (int i = 0; i < n; i++) {
  printf("%d ", fibonacci[i]);
}
printf("\n" );
}

int main(int argc, char  *argv[]) {
int n=atoi(argv[1]);
  fibo(n);
  return 0;
}
