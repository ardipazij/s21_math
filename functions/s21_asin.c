#include "s21_math.h"

long double s21_asin(double x) {
  long double result = x;
  if (x < -1 || x > 1) {
    result = S21_NAN;
  } else if (is_nan(x) || is_inf(x)) {
    result = S21_NAN;
  } else if (x == 1) {
    result = S21_M_PI2;
  } else if (x == -1) {
    result = -1 * S21_M_PI2;
  } else {
    long double temp = x;
    x *= x;
    for (int i = 1; i < 400; i += 2) {
      result += (temp *= x * i / (i + 1)) / (i + 2);
    }
  }
  return result;
}
