#include "main.h"
/**
 * pb - print
 * @t: list of argument
 * @b: buffer array
 * @e: calc
 * @a: width
 * @pd: precision specification
 * @m: size
 * Return: num of char
 */
int pb(va_list t, char b[], int e, int a, int pd, int m)
{
	unsigned int q, v, w, su;

	unsigned int ar[32];

	int co;

	UNUSED(b);
	UNUSED(e);
	UNUSED(a);
	UNUSED(pd);
	UNUSED(m);

	q = va_arg(t, unsigned int);
	m = 2147483648;
	ar[0] = q / v;
	for (w = 1; w < 32; w++)
	{
		v = v / 2;
		ar[w] = (q / v) % 2;
	}
	for (w = 0, su = 0, co = 0; w < 32; w++)
	{
		su = su + ar[w];
		if (su || w == 31)
		{
			char zi = '0' + ar[w];

			write(1, &zi, 1);
			co = co + 1;
		}
	}
	return (co);
}
