#include "s21_math.h"

long double s21_tan(double x) {
  while (x > 2 * S21_M_PI) x = x - 2 * S21_M_PI;
  while (x < -2 * S21_M_PI) x = x + 2 * S21_M_PI;
  long double result = 0;
  if (x == S21_M_PI2 || x == 3 * S21_M_PI2 || x == -1 * S21_M_PI2 ||
      x == -3 * S21_M_PI2) {
    result = S21_NAN;
  } else {
    result = s21_sin(x) / s21_cos(x);
  }
  return result;
}