#include "s21_math.h"

long double s21_log(double x) {
  long double result = 0, previos = 0;
  if (is_nan(x) || x < 0) {
    result = S21_NAN;
  } else if (x == 0) {
    result = S21_M_INFINITY_M;
  } else if (x == 1) {
    result = +0;
  } else if (is_inf(x)) {
    result = S21_M_INFINITY_P;
  } else {
    for (int i = 0; i < 200; i++) {
      previos = result;
      result = previos + 2 * (x - s21_exp(previos)) / (x + s21_exp(previos));
    }
  }
  return result;
}