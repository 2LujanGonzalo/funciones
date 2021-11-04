#include <stdio.h>
#include <stdlib.h>

int is_triangle(int a,int b,int c){
  if (a<b+c && b<a+c && c<a+b) {
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char *argv[]) {
  int a=atof(argv[1]);
  int b=atof(argv[2]);
  int c=atof(argv[3]);
printf("%d\n",is_triangle(a,b,c) );

  return 0;
}
