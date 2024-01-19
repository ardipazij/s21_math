#include "s21_math.h"

long double s21_ceil(double x) {
  long double return_value = 0;
  if (is_nan(x) || is_inf(x)) {
    return_value = x;
  } else {
    long long int result = (long long int)x;
    if ((long double)result != x && x > 0) result++;
    return_value = (long double)result;
  }
  return return_value;
}