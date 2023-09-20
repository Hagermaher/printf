#include "main.h"

/**
 * ps - Prints a string
 * @t: Li arguments
 * @b: Buffer array
 * @e: active flags
 * @a: dth.
 * @pd: Precisiontion
 * @m: Siifier
 * Return: Numbeed
 */

int ps(va_list t, char b[], int e, int a, int pd, int m)
{
	int h;
	int w;

	char *s = va_arg(t, char *);

	h = 0;
	UNUSED(b);
	UNUSED(e);
	UNUSED(a);
	UNUSED(pd);
	UNUSED(m);
	if (s == NULL)
	{
		s = "(null)";
		if (pd >= 6)
			s = "      ";
	}
	while (s[h] != '\0')
		h = h + 1;
	if (pd >= 0 && pd < h)
		h = pd;
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
