#include <stdio.h>
#include <stdlib.h>
void print_array(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n",a[i]);
  }
}

int main(void){
  int array[]={1,2,3,4,5,6};
  print_array(array,6);
  return 0;
}
