#include "s21_math.h"

long double s21_floor(double x) {
  long double return_value = 0;
  if (is_nan(x)) {
    return_value = S21_NAN;
  } else {
    long long int result = (long long int)x;
    if ((double)result != x && x < 0) {
      result--;
    }
    return_value = (long double)result;
  }
  return return_value;
}
