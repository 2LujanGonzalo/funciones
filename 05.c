#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double resolvente(double a, double b, double c){
  if (a==0) {
  return NAN;
  }
  double discriminant = b * b - 4.0 * a * c;
  if (discriminant < 0) {
  return NAN;
  }

  double root = sqrt(discriminant);
  printf("x1: %.2f\n", (-b + root) / (2.0 * a));
  printf("x2: %.2f\n", (-b - root) / (2.0 * a));
}

int main(int argc, char  *argv[]) {
  double a=atof(argv[1]);
  double b=atof(argv[2]);
  double c=atof(argv[3]);
  printf("%.2f\n", resolvente(a,b,c));
  return 0;
}
