#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = 0;
  long long div = x / y;
  result = x - (y * div);
  if (is_nan(x) || is_nan(y) || is_inf(x) || y == 0) {
    result = S21_NAN;
  } else if (is_inf(y)) {
    result = x;
  }
  return result;
}
