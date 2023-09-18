#include "main.h"

/**
 * ps - Prints
 * @t: Li arguments
 * @b: Buffer array
 * @e: active flags
 * @a: dth.
 * @d: Precisiontion
 * @m: Siifier
 * Return: Numbeed
 */

int ps(va_list t, char b[], int e, int a, int d, int m)
{
	int h;
	int w;

	char *s = va_arg(t, char *);

	h = 0;
	UNUSED(b);
	UNUSED(e);
	UNUSED(a);
	UNUSED(d);
	UNUSED(m);
	if (s == NULL)
	{
		s = "(null)";
		if (d >= 6)
			s = "      ";
	}
	while (s[h] != '\0')
		h = h + 1;
	if (d >= 0 && d < h)
		h = d;
	if (a > h)
	{
		if (e & em)
		{
			write(1, &s[0], h);
			for (w = a - h; w > 0; w--)
				write(1, " ", 1);
			return (a);
		}
		else
		{
			for (w = a - h; w > 0; w--)
				write(1, " ", 1);
			write(1, &s[0], h);
			return (a);
		}
	}
	return (write(1, s, h));

}
