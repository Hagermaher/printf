#include "main.h"
/**
 * prs - prints a binary number
 * @t: lists of arguments
 * @m: size
 * @e: flags
 * @b: buffer array
 * @a: width
 * @pd: precision
 * Return: num of printed character
 */
int prse(va_list t, char b[], int e, int a, int m, int pd)
{
	char *s;
	int w, co = 0;

	UNUSED(b);
	UNUSED(a);
	UNUSED(m);
	UNUSED(e);

	s = va_arg(t, char *);

	if (s == NULL)
	{
		UNUSED(pd);

		s = ")NULL(";
	}
	for (w = 0; s[w]; w++)
		;
	for (w = w - 1; w >= 0; w--)
	{
		char zi = s[w];

		write(1, &zi, 1);
		co++;
	}
	return (co);
}
