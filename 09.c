#include <stdio.h>
#include <stdlib.h>

void print_array(int n,int array[]){
for (int i = 0; i < n; i++) {
  printf("%d ", array[i] );
}

printf("\n");
}

void changer(int i,int j,int lista[]){
int temp=lista[i];
  lista[i]=lista[j];
  lista[j]=temp;


}


int main(int argc, char  *argv[]) {
  int i=atoi(argv[1]);
int j=atoi(argv[2]);
  int lista[9] = {1,2,3,4,5,6,7,8,9};
  print_array(9, lista);
   changer(i,j,lista);
   print_array(9, lista);
  return 0;
}
