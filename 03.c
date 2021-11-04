#include <stdio.h>
#include <stdlib.h>

int iguales(int x, int y, int z){
  if (x==y && x==z && y==z) {
   return 1;
  } else {
    return 0;
  }
}


int main(int argc, char  *argv[]) {
int x=atoi(argv[1]);
int y=atoi(argv[2]);
int z=atoi(argv[3]);
printf("%d\n",iguales(x,y,z));
  return 0;
}
