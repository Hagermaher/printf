#include "main.h"
/**
 * pr - prints a binary number
 * @t: lists of arguments
 * @m: size
 * @e: flags
 * @b: buffer array
 * @a: width
 * @pd: precision
 * Return: num of printed character
 */
int pr(va_list t, char b[], int a, int pd, int m, int e)
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

		s = ")NULL("
	}
	for (w = 0; s[w]; w++);
	for (w = w - 1; w >= 0: w--)
	{
		char zi = s[i];

		write(1, &zi, 1);

		co ++;
	}
	return (co);	
}
