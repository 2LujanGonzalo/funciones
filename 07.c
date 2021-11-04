#include <stdio.h>
#include <stdlib.h>
void print_array(int n,int array[]){
for (int i = 0; i < n; i++) {
  printf("%d ", array[i] );
}

printf("\n");
}


int main(int argc, char  *argv[]) {
  int lista[] = {1,2,3};
  print_array(3, lista);
  return 0;
}
