#include <stdio.h>
#include <stdlib.h>
void array_max(int array[]) {
  int max=-99999;
  for (int i = 0; i < 5; i++) {
    if(array[i]>max)max=array[i];
  }
  printf("%d\n",max );
}


int main(void) {
  int lista[]={1,3,5,4,2};
  array_max(lista);
  return 0;
}
