#include <stdio.h>
#include <stdlib.h>
int producto_escalar(int n){
int a[n];
int b[n];
for (int i = 1; i < n+1; i++) {
  a[i]=i;
  b[i]=i;
}
int producto_escalar=0;
  for (int i = 0; i < n+1; i++) {
    producto_escalar=producto_escalar+(a[i]*b[i]);
  }

return producto_escalar;

}


int main(int argc, char  *argv[]) {
  int n=atoi(argv[1]);
  printf("%d\n", producto_escalar(n));
  return 0;
}
