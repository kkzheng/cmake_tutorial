#include <stdio.h>
#include <stdlib.h>
#include "config.h"

#ifdef USE_MYMATH
  #include "my_power.h"
#else
  #include <math.h>
#endif

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage %s base exp \n", argv[0]);
    return 1;
  }
  double base = atof(argv[1]);
  int exp = atoi(argv[2]);
#ifdef USE_MYMATH
  printf("My provided power\n");
  double res = power(base, exp);
#else
  printf("Lib provided pow\n");
  double res = pow(base, exp);
#endif
  printf("%g ^ %d is %g\n", base, exp, res);
  return 0;
}
