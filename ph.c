#include "main.h"

/**
 * ph - print
 * @t: arguements
 * @b: characters
 * @ela: fd
 * @e: f
 * @ech: fd
 * @a: d
 * @d: d
 * @m: s
 * Return: charcaters
 */

int ph(va_list t, char ela[], char b[], int e, char ech, int a, int d, int m)
{
	int w;
	unsigned long int n;
	unsigned long int in;

	n = va_arg(t, unsigned long int);
	in = n;
	w = 1024 - 2;
	UNUSED(a);
	n = csu(n, m);
	if (n == 0)
		b[w--] = 48;
	b[1024 - 1] = '\0';
	while (n > 0)
	{
		b[w--] = ela[n % 16];
		n = n / 16;
	}
	if (e & eh && in != 0)
	{
		b[w--] = ech;
		b[w--] = 48;
	}
	w++;
	return (wu(0, w, b, e, a, d, m));
}
