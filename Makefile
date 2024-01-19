CFLAGS = -c -Wall -Werror -Wextra -std=c11
LDFLAGS = -Wall -Werror -Wextra -std=c11
SOURCE = $(wildcard functions/s21_*.c)
OBJECTS = $(patsubst %.c,%.o, ${SOURCE})
TESTS_SOURCE = tests/math_test.c
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
  	OPEN_CMD = xdg-open
	ADD_LIB = -lcheck -lsubunit -lm -lrt -lpthread -D_GNU_SOURCE
endif
ifeq ($(UNAME_S),Darwin)
	OPEN_CMD = open
	ADD_LIB =
endif

all: s21_math.a

s21_math.a: ${SOURCE}
	gcc $(CFLAGS) $(ADD_LIB) $(SOURCE)
	mv *.o functions/
	ar rcs $@ $(OBJECTS)
	ranlib s21_math.a
	-rm -rf *.o

test: s21_math.a
	gcc $(LDFLAGS) -o test $(TESTS_SOURCE) s21_math.a $(ADD_LIB) -lcheck
	./test

gcov_report:${SOURCE}
	gcc --coverage ${SOURCE} ${TESTS_SOURCE} -o test $(ADD_LIB) -lcheck
	./test
	gcov ${SOURCE}
	lcov -t "stest" -o s21_test.info -c -d .
	genhtml -o report s21_test.info
	$(OPEN_CMD) ./report/index.html

clean:
	-rm -rf functions/*.o *.gcda *.gcno *.gcov *result coverage.info s21_test.info s21_math.a test report
