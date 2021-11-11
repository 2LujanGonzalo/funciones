#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


bool palindromo(char a[]) {


bool EsPalindromo=true;

    int length=0;
    while (a[length] != 0) length++;

for (int i = 0; i < length/2 ; i++) {
  if (!(a[i] == a[length-i-1])) {
    EsPalindromo=false;
  }
}

if (EsPalindromo) {
  return true;
}else {
return false;
}
}

int main(int argc, char *argv[]){
  printf("%d\n", palindromo(argv[1]));
  return 0;
}
