#include <stdio.h>
#include <stdlib.h>

int buscar(int a[],int size,int search){
  for (int i = 0; i < size; i++) {
    if (a[i]==search)return i;
  }
  return -1;
}

int main(int argc, char  *argv[]) {
  int a[]={1,2,3,4,5,6,7,8};
  printf("%d\n", buscar(a,8,8));
  return 0;
}
