#ifndef S21_MATCH
#define S21_MATCH
#define S21_EPS 1e-99l
#define S21_M_PI2 1.57079632679489661923
#define S21_M_E 2.718281828459045
#define S21_M_PI 3.14159265358979323846
#define S21_M_INFINITY_P (1.0 / 0.0)
#define S21_M_INFINITY_M (-1.0 / 0.0)
#define S21_NAN (0.0 / 0.0)
#define is_nan(x) __builtin_isnan(x)
#define is_inf(x) __builtin_isinf(x)

int s21_abs(int x);               // done
long double s21_acos(double x);   // done дописать тесты
long double s21_asin(double x);   // done дописать тесты
long double s21_atan(double x);   // in progress
long double s21_ceil(double x);   // done
long double s21_cos(double x);    // done
long double s21_exp(double x);    // done
long double s21_fabs(double x);   // done
long double s21_floor(double x);  // done
long double s21_fmod(double x, double y);
long double s21_log(double x);                 // done
long double s21_pow(double base, double exp);  // in progress
long double s21_sin(double x);                 // done
long double s21_sqrt(double x);                // done
long double s21_tan(double x);                 // done

#endif  // S21_MATCH