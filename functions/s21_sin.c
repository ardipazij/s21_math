#include "s21_math.h"

long double s21_sin(double x) {
  long double result = 1;
  if (x == S21_M_INFINITY_M || x == S21_M_INFINITY_P)
    result = S21_NAN;
  else {
    while (x > 2 * S21_M_PI) x = x - 2 * S21_M_PI;
    while (x < -2 * S21_M_PI) x = x + 2 * S21_M_PI;
    result = s21_cos(x - S21_M_PI2);
  }
  return result;
}