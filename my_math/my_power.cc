#include "my_power.h"

double power(double base, int exp) {
  double res = 1;
  for (int i = 1; i <= exp; i++) {
    res *= base;
  }
  return res;
}
