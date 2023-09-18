#include "main.h"
/**
 * pi - prints integer number
 * @t: ents
 * @b: Buffprint
 * @e: Calculates act
 * @a: ge.
 * @d: Precisoon
 * @m: Size sr
 * Return: Numprinted
 */
int pi(va_list t, char b[], int e, int a, int d, int m)
{
	int w;
	int in;
	unsigned long int ra;
	long int r = va_arg(t, long int);

	w = BUFF_SIZE - 2;
	r = csn(r, m);
	if (r == 0)
		b[w--] = '0';
	b[BUFF_SIZE - 1] = '\0';
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
	return (wn(in, w, b, e, a, d, m));
}
