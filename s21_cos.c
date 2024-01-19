#include "s21_math.h"

long double s21_cos(double x) {
  long double result = 1;
  if (x == S21_M_INFINITY_M || x == S21_M_INFINITY_P)
    result = S21_NAN;
  else {
    while (x > 2 * S21_M_PI) x = x - 2 * S21_M_PI;
    while (x < -2 * S21_M_PI) x = x + 2 * S21_M_PI;
    long double numerator = x * x;
    long double temp = 1;
    for (int i = 1; (temp > S21_EPS || temp < (-1 * S21_EPS)); i++) {
      temp *= (-1) * numerator / ((2 * i) * (2 * i - 1));
      result += temp;
    }
  }
  return result;
}
// long double s21_cos(double x){ // переполнение стека в случае использования
// фрактала в виде отедельной переменной
//     long double result = 1;

//     while(x < 2 * S21_M_PI) {x += 2 * S21_M_PI;};
//     while(x > 2 * S21_M_PI) {x -= 2 * S21_M_PI;};

//     return result;
// }