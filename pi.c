#include "main.h"
/**
 * pi - prints integer number
 * @t: ents
 * @b: Buffprint
 * @e: Calculates act
 * @a: get width
 * @pd: Precisoon
 * @m: Size sr
 * Return: Numprinted
 */
int pi(va_list t, char b[], int e, int a, int pd, int m)
{
	int w;
	int in;
	unsigned long int ra;
	long int r = va_arg(t, long int);

	in = 0;
	w = 1024 - 2;
	r = csn(r, m);
	if (r == 0)
		b[w--] = '0';
	b[1024 - 1] = '\0';
	ra = (unsigned long int)r;
	if (r < 0)
	{
		ra = (unsigned long int)((-1) * r);
		in = 1;
	}
	while (ra > 0)
	{
		b[w--] = (ra % 10) + '0';
		ra = ra / 10;
	}
	w++;
	return (wn(in, w, b, e, a, pd, m));
}
