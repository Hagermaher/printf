#include "main.h"

/**
 * pu - print
 * @t: arguements
 * @b: characters
 * @e: f
 * @a: d
 * @pd: d
 * @m: s
 * Return: charcaters
 */

int pu(va_list t, char b[], int e, int a, int pd, int m)
{
	int w;
	unsigned long int n = va_arg(t, unsigned long int);

	n = csu(n, m);
	w = 1024 - 2;
	if (n == 0)
		b[w--] = '0';
	b[1024 - 1] = '\0';
	while (n > 0)
	{
		b[w--] = (n % 10) + '0';
		n = n / 10;
	}
	w++;
	return (wu(0, w, b, e, a, pd, m));
}
