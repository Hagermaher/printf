#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define UNUSED(x) (void)(x)

#define em 1
#define ep 2
#define ez 4
#define eh 8
#define es 16

#define ml 2
#define ms 1

/**
 * struct f - struct
 *
 * @f : format;
 * @fx: function
 */
struct f
{
	char f;
	int (*fx)(va_list, char[], int, int, int, int);

};
/**
 * typedef strucr f xf - struct op
 *
 * @f: format
 * @xf: function
 */

typedef struct f xf;

int hp(const char *f, int *w, va_list k, char b[],
	int e, int a, int pd, int m);
int pc(va_list t, char b[], int e, int a, int pd, int m);
int ps(va_list t, char b[], int e, int a, int pd, int m);
int pps(va_list t, char b[], int e, int a, int pd, int m);
int hwc(char z, char b[], int e, int a, int pd, int m);
int pi(va_list args, int y);
int opr(const char *format, va_list args, int y);
int pb(unsigned int n, int y);
int _printf(const char *format, ...);
int hexa(unsigned int n, int y, int uppercase);
int po(unsigned int n, int y);
int pu(unsigned int n, int y);
int pr(va_list args, int y);
int pp(va_list args, int y);
int ge(const char *format, int *w);
int gw(const char *format, int *w, va_list k);
int gp(const char *format, int *w, va_list k);
int gs(const char *format, int *w);
#endif
