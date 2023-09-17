#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int pc(va_list args, int y);
int ps(va_list args, int y);
int pi(va_list args, int y);
int opr(const char *format, va_list args, int y);
int pb(unsigned int n, int y);
int _printf(const char *format, ...);
int hexa(unsigned int n, int y, int uppercase);
int po(unsigned int n, int y);
int pu(unsigned int n, int y);
int pr(va_list args, int y);
int pp(va_list args, int y);
#endif
