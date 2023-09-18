#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define UNUSED(x) (void)(x)

#define EM 1
#define EP 2
#define EZ 4
#define FH 8
#define FS 16

#define ML 2
#define MH 1

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
#endif
