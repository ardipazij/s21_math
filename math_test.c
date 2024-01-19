#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(abs_test) {
  ck_assert_int_eq(s21_abs(5), abs(5));
  ck_assert_int_eq(s21_abs(-10), abs(-10));
  ck_assert_int_eq(s21_abs(12345), abs(12345));
  ck_assert_int_eq(s21_abs(-523123124), abs(-523123124));
  ck_assert_int_eq(s21_abs(18), abs(18));
  ck_assert_int_eq(s21_abs(-05), abs(-05));
  ck_assert_int_eq(s21_abs(12345), abs(12345));
  ck_assert_int_eq(s21_abs(100), abs(100));
  ck_assert_int_eq(s21_abs(-100), abs(-100));
  ck_assert_int_eq(s21_abs(-1), abs(-1));
  ck_assert_int_eq(s21_abs(0), abs(0));
  ck_assert_int_eq(s21_abs(-0), abs(-0));
}
END_TEST

START_TEST(acos_test) {
  ck_assert_ldouble_eq_tol(s21_acos(-1.0), acos(-1.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(1.0), acos(1.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.000345), acos(-0.000345), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.953001), acos(-0.953001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.123456), acos(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.4), acos(-0.4), 1e-6);
  ck_assert_ldouble_nan(s21_acos(S21_M_INFINITY_P));
  ck_assert_ldouble_nan(s21_acos(S21_M_INFINITY_M));
  ck_assert_ldouble_nan(s21_acos(S21_NAN));
}
END_TEST

START_TEST(asin_test) {
  ck_assert_ldouble_eq_tol(s21_asin(-1.0), asin(-1.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(1.0), asin(1.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.000349), asin(-0.000349), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.420), asin(-0.420), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.0050), asin(0.0050), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.12345), asin(0.12345), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 1e-6);
  ck_assert_ldouble_nan(s21_asin(70));
  ck_assert_ldouble_nan(s21_asin(S21_M_INFINITY_P));
  ck_assert_ldouble_nan(s21_asin(S21_M_INFINITY_M));
  ck_assert_ldouble_nan(s21_asin(S21_NAN));
}
END_TEST

START_TEST(atan_test) {
  ck_assert_ldouble_eq_tol(s21_atan(1.000000), atan(1.000000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.866025), atan(0.866025), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.866025), atan(0.866025), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.707107), atan(0.707107), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.000000), atan(0.000000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.500000), atan(-0.500000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.707107), atan(-0.707107), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.866025), atan(-0.866025), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.866025), atan(-0.866025), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.707107), atan(-0.707107), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.500000), atan(-0.500000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.000000), atan(-0.000000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.500000), atan(0.500000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.707107), atan(0.707107), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.866025), atan(0.866025), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.445738), atan(-0.445738), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.500000), atan(-0.500000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.123456), atan(0.123456), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-0.123456), atan(-0.123456), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(0.0011), atan(0.0011), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(10), atan(10), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(9000), atan(9000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-100), atan(-100), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(-500000), atan(-500000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(S21_M_INFINITY_M), atan(S21_M_INFINITY_M),
                           9e-7);
  ck_assert_ldouble_eq_tol(s21_atan(S21_M_INFINITY_P), atan(S21_M_INFINITY_P),
                           9e-7);
  ck_assert_ldouble_nan(s21_atan(S21_NAN));
}
END_TEST

START_TEST(exp_test) {
  ck_assert_ldouble_eq_tol(s21_exp(-1.5), exp(-1.5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-1.7), exp(-1.7), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-17), exp(-17), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(1.5), exp(1.5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(20), exp(20), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-33), exp(-33), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-21), exp(-21), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(1.32133), exp(1.32133), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-1.32133), exp(-1.32133), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(.000000), exp(.000000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.78394), exp(0.78394), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.584940), exp(0.584940), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.0000), exp(0.0000), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-0.500), exp(-0.500), 9e-7);

  ck_assert_ldouble_eq_tol(s21_exp(-0.707107), exp(-0.707107), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-0.445738), exp(-0.445738), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.445738), exp(0.445738), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.764583), exp(0.764583), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.778345), exp(0.778345), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.987565), exp(0.987565), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.799415), exp(0.799415), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.755634), exp(0.755634), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-32), exp(-32), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-31), exp(-31), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.216875), exp(0.216875), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.123456), exp(0.123456), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-0.123456), exp(-0.123456), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-5), exp(-5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-5.946047569), exp(-5.946047569), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-13.253678), exp(-13.253678), 9e-7);
  ck_assert_ldouble_eq_tol(s21_exp(-30), exp(-30), 1e-7);
  ck_assert_ldouble_nan(s21_exp(S21_NAN));
}
END_TEST

START_TEST(fabs_test) {
  ck_assert_ldouble_eq_tol(s21_fabs(-1.001), fabs(-1.001), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(1.001), fabs(1.001), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(1.1), fabs(1.1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-0.0), fabs(-0.0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.1), fabs(-1.1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(987633.465), fabs(987633.465), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-987633.465), fabs(-987633.465), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(897645.1), fabs(897645.1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(1.5555), fabs(1.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.5555), fabs(-1.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(2.5555), fabs(2.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-2.5555), fabs(-2.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(1456.5555), fabs(1456.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(65641.5555), fabs(65641.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-1456.5555), fabs(-1456.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-65641.5555), fabs(-65641.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(786.5555), fabs(786.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(423.5555), fabs(423.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(86.5555), fabs(86.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(983.5555), fabs(983.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-983.5555), fabs(-983.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(751.5555), fabs(751.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-751.5555), fabs(-751.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(1000.5555), fabs(1000.5555), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.0), fabs(-1.0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-10.999999), fabs(-10.999999), 9e-7);
  ck_assert_ldouble_eq_tol(
      s21_fabs(-10000000000000000000.33333333333559595989898),
      fabs(-10000000000000000000.33333333333559595989898), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(5.0), fabs(5.0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(12589487885888888882.588999898982222222222),
                           fabs(12589487885888888882.588999898982222222222),
                           9e-7);
}
END_TEST

START_TEST(floor_test) {
  ck_assert_ldouble_eq_tol(s21_floor(10.9), floor(10.9), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(1.1), floor(1.1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(10.98), floor(10.98), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(123.123), floor(123.123), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(3.33), floor(3.33), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(15.5), floor(15.5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(16.5), floor(16.5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-1.1), floor(-1.1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-10.98), floor(-10.98), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-123.123), floor(-123.123), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-3.33), floor(-3.33), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-15.5), floor(-15.5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-16.5), floor(-16.5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(1000.57), floor(1000.57), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-1000.57), floor(-1000.57), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(123753.785), floor(123753.785), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-123753.785), floor(-123753.785), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(3465.0000001), floor(3465.0000001), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-3465.0000001), floor(-3465.0000001),
                           9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(0), floor(0), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(0.0001), floor(0.0001), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(11.5), floor(11.5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(1000000000000.2), floor(1000000000000.2),
                           9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-1), floor(-1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-25.99999999999), floor(-25.99999999999),
                           9e-7);
  ck_assert_ldouble_eq_tol(s21_floor(-200000000000000.9995555464654878484),
                           floor(-200000000000000.9995555464654878484), 9e-7);
  ck_assert_ldouble_nan(s21_floor(S21_NAN));
}
END_TEST

START_TEST(fmod_test) {
  ck_assert_double_eq_tol(s21_fmod(15.9, 2.3), fmod(15.9, 2.3), 9e-7);
  ck_assert_double_eq_tol(s21_fmod(-100.0000999, -10.0006),
                          fmod(-100.0000999, -10.0006), 9e-7);
  ck_assert_int_eq(s21_fmod(0, 0), fmod(0, 0));
  ck_assert_double_eq_tol(s21_fmod(10500.9, 102.3), fmod(10500.9, 102.3), 9e-7);
  ck_assert_double_eq_tol(s21_fmod(103100, -10.0006), fmod(103100, -10.0006),
                          9e-7);
  ck_assert_double_eq_tol(s21_fmod(-100.0000999, 10.0006),
                          fmod(-100.0000999, 10.0006), 9e-7);
  ck_assert_double_eq_tol(s21_fmod(-0.0000999, 10.0006),
                          fmod(-0.0000999, 10.0006), 9e-7);
  ck_assert_double_eq_tol(s21_fmod(1.1, 0.1), fmod(1.1, 0.1),
                          9e-7);  /// gyhoijjj;jk
  ck_assert_int_eq(s21_fmod(34, S21_M_INFINITY_P), fmod(34, S21_M_INFINITY_P));
}
END_TEST

START_TEST(pow_test) {
  ck_assert_double_eq_tol(s21_pow(1.001, 1.63), pow(1.001, 1.63), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-10.0, -3), pow(-10.0, -3.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(3.0008, 2), pow(3.0008, 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-8.0, 3.0), pow(-8.0, 3.0), 1e-6);
  ck_assert_double_eq_tol(s21_pow(0.0, 0.0), pow(0.0, 0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(4.0, -3.0), pow(4.0, -3.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(5.0, 2.0), pow(5.0, 2.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1.0, S21_NAN), pow(1.0, S21_NAN), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(S21_NAN, 0.0), pow(S21_NAN, 0.0), 1e-6);
  ck_assert_double_nan(s21_pow(S21_NAN, S21_NAN));
  ck_assert_double_nan(s21_pow(-5.0, 4.8));
  ck_assert_ldouble_eq_tol(s21_pow(0.0, 2.0), pow(0.0, 2.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.0, 3.0), pow(0.0, 3.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.0, 0.0), pow(0.0, 0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1.0, S21_M_INFINITY_M),
                           pow(-1.0, S21_M_INFINITY_M), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1.0, S21_M_INFINITY_P),
                           pow(-1.0, S21_M_INFINITY_P), 1e-6);
  ck_assert_ldouble_infinite(s21_pow(0.34, S21_M_INFINITY_M));
  ck_assert_ldouble_eq_tol(s21_pow(0.34, S21_M_INFINITY_P),
                           pow(0.34, S21_M_INFINITY_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(S21_M_INFINITY_M, -3.0),
                           pow(S21_M_INFINITY_M, -3.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(S21_M_INFINITY_M, -34.0),
                           pow(S21_M_INFINITY_M, -34.0), 1e-6);
  ck_assert_ldouble_infinite(s21_pow(S21_M_INFINITY_M, 3.0));
  ck_assert_ldouble_infinite(s21_pow(S21_M_INFINITY_M, 34.0));
  ck_assert_ldouble_eq_tol(s21_pow(S21_M_INFINITY_P, -3.0),
                           pow(S21_M_INFINITY_P, -3.0), 1e-6);
  ck_assert_ldouble_infinite(s21_pow(S21_M_INFINITY_P, 4.0));
  ck_assert_ldouble_infinite(s21_pow(S21_M_INFINITY_M, S21_M_INFINITY_P));
}
END_TEST

START_TEST(log_test) {
  ck_assert_ldouble_eq_tol(s21_log(35), log(35), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(123456), log(123456), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(123456789), log(123456789), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(0.123), log(0.123), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(0.1234567), log(0.1234567), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(0.123456789123456), log(0.123456789123456),
                           9e-7);
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(786), log(786), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(0.866025), log(0.866025), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(707107), log(707107), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(9), log(9), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(88), log(88), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(5422), log(5422), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(0.123456), log(0.123456), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(123456), log(123456), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 9e-7);
  ck_assert_ldouble_nan(s21_log(-1));
  ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(0.1234), log(0.1234), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(0.9876), log(0.9876), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(123), log(123), 9e-7);
  ck_assert_ldouble_eq_tol(s21_log(547893), log(547893), 9e-7);
  ck_assert_ldouble_infinite(s21_log(S21_M_INFINITY_P));
  ck_assert_ldouble_infinite(s21_log(0));
}
END_TEST

START_TEST(sqrt_test) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(5), sqrt(5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(67.98), sqrt(67.98), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(35), sqrt(35), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(123456789), sqrt(123456789), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.123456), sqrt(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(786), sqrt(786), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(16857456), sqrt(16857456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(76412), sqrt(76412), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(9), sqrt(9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(88), sqrt(88), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(5422), sqrt(5422), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.123456), sqrt(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(123456), sqrt(123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(3), sqrt(3), 1e-6);
  ck_assert_ldouble_nan(s21_sqrt(-1.234666));
  ck_assert_ldouble_eq_tol(s21_sqrt(75846.745723), sqrt(75846.745723), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(788544), sqrt(788544), 1e-6);
}
END_TEST

START_TEST(sin_test) {
  ck_assert_ldouble_eq_tol(s21_sin(0.0), sin(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-2.64234), sin(-2.64234), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-7.1685), sin(-7.1685), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-0.1), sin(-0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_M_PI / 2), sin(S21_M_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_M_PI), sin(S21_M_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(7 * S21_M_PI / 6), sin(7 * S21_M_PI / 6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(5 * S21_M_PI / 4), sin(5 * S21_M_PI / 4),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-2 * S21_M_PI), sin(-2 * S21_M_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-11 * S21_M_PI / 17),
                           sin(-11 * S21_M_PI / 17), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-32 * S21_M_PI / 3), sin(-32 * S21_M_PI / 3),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(2), sin(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(3 * S21_M_PI), sin(3 * S21_M_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0.123456), sin(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(5 * S21_M_PI / 6), sin(5 * S21_M_PI / 6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_M_PI), sin(S21_M_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(126.745723), sin(126.745723), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-235.345971), sin(-235.345971), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(75846.745723), sin(75846.745723), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-92553.345971), sin(-92553.345971), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_M_PI / 3), sin(S21_M_PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_M_PI / 6), sin(S21_M_PI / 6), 1e-6);
  ck_assert_ldouble_nan(s21_sin(S21_M_INFINITY_M));
}
END_TEST

START_TEST(cos_test) {
  ck_assert_ldouble_eq_tol(s21_cos(-1.5472), cos(-1.5472), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(1), cos(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0.4), cos(0.4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(12415.12415), cos(12415.12415), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-124345.9999), cos(-124345.9999), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(11.000634), cos(11.000634), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-S21_M_PI / 6), cos(-S21_M_PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-S21_M_PI / 4), cos(-S21_M_PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-S21_M_PI / 2), cos(-S21_M_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-2 * S21_M_PI / 3), cos(-2 * S21_M_PI / 3),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(2), cos(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-0.123456), cos(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0x123), cos(0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-0x123), cos(-0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(10000 * S21_M_PI), cos(10000 * S21_M_PI),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-10000 * S21_M_PI), cos(-10000 * S21_M_PI),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(75846.745723), cos(75846.745723), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-92553.345971), cos(-92553.345971), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(S21_M_PI / 3), cos(S21_M_PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(S21_M_PI / 6), cos(S21_M_PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(S21_M_PI / 2), cos(S21_M_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(S21_M_PI / 2), cos(S21_M_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(5 * S21_M_PI / 6), cos(5 * S21_M_PI / 6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(S21_M_PI), cos(S21_M_PI), 1e-6);
  ck_assert_ldouble_nan(s21_cos(S21_M_INFINITY_M));
}
END_TEST

START_TEST(tan_test) {
  ck_assert_ldouble_eq_tol(s21_tan(0.0), tan(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-2.78976), tan(-2.78976), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-7.7899), tan(-7.7899), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(1.1), tan(1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(5.51254), tan(5.51254), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-0.1), tan(-0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_M_PI / 6), tan(S21_M_PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_M_PI / 4), tan(S21_M_PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_M_PI), tan(S21_M_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(2), tan(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(3 * S21_M_PI), tan(3 * S21_M_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0.123456), tan(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-0.123456), tan(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0x123), tan(0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-0x123), tan(-0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(10000 * S21_M_PI), tan(10000 * S21_M_PI),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-10000 * S21_M_PI), tan(-10000 * S21_M_PI),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_M_PI / 3), tan(S21_M_PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_M_PI / 6), tan(S21_M_PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(5 * S21_M_PI / 6), tan(5 * S21_M_PI / 6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_M_PI), tan(S21_M_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(126.745723), tan(126.745723), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-92553.345971), tan(-92553.345971), 1e-6);
  ck_assert_ldouble_nan(s21_tan(S21_M_PI2));
}
END_TEST

START_TEST(ceil_test) {
  ck_assert_ldouble_eq_tol(s21_ceil(1.1), ceil(1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(10.22), ceil(10.98), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(12345.12345), ceil(12345.12345), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-3.33), ceil(-3.33), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-15.5), ceil(-15.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-16.5), ceil(-16.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(4.44), ceil(4.44), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(5.5), ceil(5.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(20.5), ceil(20.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1.1), ceil(-1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-10.22), ceil(-10.22), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-123.12345), ceil(-123.12345), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(123456.5), ceil(123456.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(1.00005), ceil(1.00005), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(0), ceil(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(1), ceil(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1), ceil(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(2), ceil(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-2), ceil(-2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(123753.785), ceil(123753.785), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(1000), ceil(1000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1000), ceil(-1000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-123753.785), ceil(-123753.785), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(3465.0000001), ceil(3465.0000001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-3465.0000001), ceil(-3465.0000001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(0), ceil(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(0.0001), ceil(0.0001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(11.5), ceil(11.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(10000000000.2), ceil(10000000000.2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1), ceil(-1), 1e-6);
  ck_assert_ldouble_nan(s21_ceil(S21_NAN));
}
END_TEST

int main() {
  int no_failed = 0;
  Suite *s = suite_create("MathT");
  SRunner *runner = srunner_create(s);

  // abs
  TCase *tc_abs;
  tc_abs = tcase_create("abs test");
  suite_add_tcase(s, tc_abs);
  tcase_add_test(tc_abs, abs_test);

  // acos
  TCase *tc_acos;
  tc_acos = tcase_create("acos test");
  suite_add_tcase(s, tc_acos);
  tcase_add_test(tc_acos, acos_test);

  // asin
  TCase *tc_asin;
  tc_asin = tcase_create("asin test");
  suite_add_tcase(s, tc_asin);
  tcase_add_test(tc_asin, asin_test);

  // atan
  TCase *tc_atan;
  tc_atan = tcase_create("atan test");
  suite_add_tcase(s, tc_atan);
  tcase_add_test(tc_atan, atan_test);

  // exp
  TCase *tc_exp;
  tc_exp = tcase_create("exp test");
  suite_add_tcase(s, tc_exp);
  tcase_add_test(tc_exp, exp_test);

  //   fabs
  TCase *tc_fabs;
  tc_fabs = tcase_create("fabs test");
  suite_add_tcase(s, tc_fabs);
  tcase_add_test(tc_fabs, fabs_test);

  // floor
  TCase *tc_floor;
  tc_floor = tcase_create("floor test");
  suite_add_tcase(s, tc_floor);
  tcase_add_test(tc_floor, floor_test);

  // fmod
  TCase *tc_fmod;
  tc_fmod = tcase_create("tc_fmod test");
  suite_add_tcase(s, tc_fmod);
  tcase_add_test(tc_fmod, fmod_test);

  // pow
  TCase *tc_pow;
  tc_pow = tcase_create("pow test");
  suite_add_tcase(s, tc_pow);
  tcase_add_test(tc_pow, pow_test);

  // log
  TCase *tc_log;
  tc_log = tcase_create("log test");
  suite_add_tcase(s, tc_log);
  tcase_add_test(tc_log, log_test);

  // sqrt
  TCase *tc_sqrt;
  tc_sqrt = tcase_create("sqrt test");
  suite_add_tcase(s, tc_sqrt);
  tcase_add_test(tc_sqrt, sqrt_test);

  // sin
  TCase *tc_sin;
  tc_sin = tcase_create("sin test");
  suite_add_tcase(s, tc_sin);
  tcase_add_test(tc_sin, sin_test);

  // cos
  TCase *tc_cos;
  tc_cos = tcase_create("cos test");
  suite_add_tcase(s, tc_cos);
  tcase_add_test(tc_cos, cos_test);

  // tan
  TCase *tc_tan;
  tc_tan = tcase_create("tan test");
  suite_add_tcase(s, tc_tan);
  tcase_add_test(tc_tan, tan_test);

  // ceil
  TCase *tc_ceil;
  tc_ceil = tcase_create("ceil test");
  suite_add_tcase(s, tc_ceil);
  tcase_add_test(tc_ceil, ceil_test);

  // runner
  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
