#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double result = 0;
  if (is_nan(base) || is_nan(exp)) {
    if (base == 1.0)
      result = 1;
    else if (exp == 0.0)
      result = 1;
    else {
      result = S21_NAN;
    }
  } else if (base == -__builtin_huge_valf() && exp == __builtin_huge_valf()) {
    result = S21_M_INFINITY_P;
  } else if ((base == +0 || base == -0) && s21_fmod(exp, 2) && exp > 0)
    result = base;
  else if (((base == +0 || base == -0) && !s21_fmod(exp, 2) && exp > 0) ||
           (s21_fabs(base) > 1 && is_inf(exp) && exp < 0) ||
           (s21_fabs(base) < 1 && is_inf(exp) && exp > 0))
    result = +0;
  else if (base == -1.0 && is_inf(exp))
    result = 1.0;
  else if ((s21_fabs(base) < 1 && is_inf(exp) && exp < 0) ||
           (s21_fabs(base) < 1 && is_inf(exp) && exp > 0))
    result = S21_M_INFINITY_P;
  else if (base < 0 && exp != (int)exp)
    result = S21_NAN;
  else if (is_inf(base) && base < 0 && exp < 0 && s21_fmod(exp, 2) != 0)
    result = -0;
  else if (is_inf(base) && base < 0 && exp < 0 && s21_fmod(exp, 2) == 0)
    result = -0;
  else if (is_inf(base) && base < 0 && exp > 0 && s21_fmod(exp, 2) != 0)
    result = S21_M_INFINITY_M;
  else if (is_inf(base) && base < 0 && exp > 0 && s21_fmod(exp, 2) == 0)
    result = S21_M_INFINITY_P;
  else if (is_inf(base) && base > 0 && exp < 0)
    result = +0;
  else if (is_inf(base) && base > 0 && exp > 0)
    result = S21_M_INFINITY_P;
  else if (base < 0 && exp - (int)exp == 0) {
    base = -base;
    result = s21_exp(exp * s21_log(base));
    if (s21_fmod(exp, 2) != 0) result = -result;
  } else if (base == 0.0 && exp == 0.0)
    result = 1.0;
  else {
    result = s21_exp(exp * s21_log(base));
  }
  return result;
}

/*

Добавить в исключения функции

If x is +0 or -0, and y is an odd integer less than 0, a pole error occurs and
HUGE_VAL, HUGE_VALF, or HUGE_VALL, is returned, with the same sign as x.

If x is +0 or -0, and y is less than 0 and not an odd integer, a pole error
occurs and +HUGE_VAL, +HUGE_VALF, or +HUGE_VALL, is returned.



*/