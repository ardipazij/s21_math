#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 1, temp = 1;
  if (is_nan(x))
    result = S21_NAN;
  else if (x < 0) {
    result = 1 / s21_exp(x * -1);
  } else if (x > 710)
    result = S21_M_INFINITY_M;
  else if (x > 0) {
    for (int i = 1; temp > 1e-19; i++) {
      temp *= x / i;
      result += temp;
    }
  }
  return result;
}