#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define bbm 1024
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

int hp(const char *f, int *o, va_list k, char b[],
	int e, int a, int pd, int m);
int pc(va_list t, char b[], int e, int a, int pd, int m);
int ps(va_list t, char b[], int e, int a, int pd, int m);
int pps(va_list t, char b[], int e, int a, int pd, int m);
int hwc(char z, char b[], int e, int a, int pd, int m);
int _printf(const char *format, ...);
int pi(va_list t, char b[], int e, int a, int m, int pd);
int pbi(va_list t, char b[], int e, int a, int m, int pd);
int pu(va_list t, char b[], int e, int a, int m, int pd);
int poc(va_list t, char b[], int e, int a, int m, int pd);
int phd(va_list t, char b[], int e, int a, int m, int pd);
int phu(va_list t, char b[], int e, int a, int m, int pd);
int ph(va_list t, char ela[], char b[],
		int e, char ec, int a, int pd, int m);
int pnp(va_list t, char b[], int e, int a, int m, int pd);
int ppo(va_list t, char b[], int e, int a, int m, int pd);
int gf(const char *format, int *w);
int gsi(const char *format, int *w);
int gp(const char *format, int *w, va_list k);
int gw(const char *format, int *w, va_list k);
int prse(va_list t,char b[], int e, int a, int m, int pd);
int pro(va_list t, char b[], int e, int a, int d, int m);
int wn(int ip, int o, char b[], int e, int a, int pd, int m);
int wnu(int o, char bb[], int e, int a, int pd, int le,
		char pa, char ech);
int wpn(char b[], int o, int le,int a,
		int e, char pa, char ec, int pst);
int wu(int in , int o, char b[],
		int e, int a, int pd, int m);
int ip(char);
int aph(char, char[], int);
int id (char);
long int csn(long int n, int m);
long int csu(unsigned long int n, int m);
#endif
