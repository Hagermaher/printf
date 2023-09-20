#include "main.h"
/**
 * poc - print octal
 * @pd: precision
 * @t: list of argument
 * @b : buffer array
 * @e: calc flags
 * @a: width
 * @m: size
 * Return: num of char
 */

int poc(va_list t, char b[], int e, int a, int m, int pd)
{
	int w;
	unsigned long int n = va_arg(t, unsigned long int);
	unsigned long int in;

	w = 1024 - 2;
	in = n;
	UNUSED(a);
	n = csu(n, m);
	if (n == 0)
		b[w--] = '0';
	b[1024 - 1] = '\0';
	while (n > 0)
	{
		b[w--] = (n % 8) + '0';
		n = n / 8;
	}
	if (e & eh && in != 0)
		b[w--] = '0';
	w++;
	return (wu(0, w, b, e, a, pd, m));
}
