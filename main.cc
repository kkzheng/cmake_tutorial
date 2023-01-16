#include <stdio.h>
#include <stdlib.h>

double power(double base, int exp) {
  int res = 1;
  for (int i = 1; i <= exp; i++) {
    res *= base;
  }
  return res;
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage %s base exp \n", argv[0]);
    return 1;
  }
  double base = atof(argv[1]);
  int exp = atoi(argv[2]);
  double res = power(base, exp);
  printf("%g ^ %d is %g\n", base, exp, res);
  return 0;
}
