#include "s21_math.h"

long double s21_atan(double x) {
  long double result = 0;
  if (x == 0)
    result = 0;
  else if (is_nan(x))
    result = S21_NAN;
  else if (is_inf(x) && x > 0)
    result = 1.5707963267948966;
  else if (is_inf(x) && x < 0)
    result = -1.5707963267948966;
  else if (x == 1)
    result = 0.78539816339744827900;
  else if (x == -1)
    result = -0.78539816339744827900;
  else {
    long double upper = 0;
    long double lower = 0;
    if (s21_fabs(x) < 1) {
      for (int i = 0; i < 200; i++) {
        upper = s21_pow(-1, i) * s21_pow(x, 1 + (2 * i));
        lower = 1 + (2 * i);
        result = result + (upper / lower);
      }
    } else if (s21_fabs(x) > 1) {
      for (int i = 0; i < 200; i++) {
        upper = s21_pow(-1, i) * s21_pow(x, -1 - (2 * i));
        lower = 1 + (2 * i);
        result = result + (upper / lower);
      }
      upper = S21_M_PI * s21_fabs(x);
      lower = 2 * x;
      result = upper / lower - result;
    }
  }
  return result;
}