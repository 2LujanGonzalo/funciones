#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b) {
  int temp=a;
  a=b;
  b=temp;
  printf("%d,%d\n",a,b );
}

int main(int argc, char  *argv[]) {
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
printf("%d,%d\n",a,b );
swap(a,b);
  return 0;
}
