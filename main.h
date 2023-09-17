#define MAIN_H
#ifndef MAIM_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int printf_c(va_list args, int y);
int printf_s(va_list args, int y);
int printf_i(va_list args, int y);
int op(const char *format, va_list args, int y);
int printf_b(unsigned int n, int y);
int _printf(const char *format, ...);
int hexa (unsigned int n, int y, int uppercase);
int printf_o(unsigned int n, int y);
int printf_u(unsigned int n, int y);
int printf_res(va_list args, int y);
int printf_p(va_list args, int y);

#endif
