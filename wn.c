#include "main.h"

/**
 * wn - print
 * @in: arguements
 * @o: d
 * @b: characters
 * @e: f
 * @a: d
 * @pd: d
 * @m: s
 * Return: charcaters
 */

int wn(int in, int o, char b[], int e, int a, int pd, int m)
{
	int h;
	char z;
	char x;

	h = 1024 - o - 1;
	z = ' ';
	x = 0;
	UNUSED(m);
	if ((e & ez) && !(e & em))
		z = 48;
	if (in)
		x = 45;
	else if (e & ep)
		x = 43;
	else if (e & es)
		x = 32;
	return (wnu(o, b, e, a, pd, h, z, x));
}
