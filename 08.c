#include <stdio.h>
#include <stdlib.h>
void Char_Cant(char *a) {
  int i=0;
  while (a[i]) {
    printf("%c",a[i] );
    i++;
  }
printf(" tiene %d caracteres\n",i );
}


int main(int argc, char  *argv[]) {
// char a=atoi(argv[1]);
  Char_Cant(argv[1]);
  return 0;
}
