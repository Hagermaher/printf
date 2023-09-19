#include "main.h"
/**
 * pnp - print
 * @t: arguements
 * @b: characters
 * @e: f
 * @a: d
 * @d: d
 * @m: s
 * Return: charcaters
 */

int pnp(va_list t, char b[], int e, int a, int d, int m)
{
	int w;
	int o;
	char *s = va_arg(t, char *);

	w = 0;
	o = 0;
	UNUSED(e);
	UNUSED(a);
	UNUSED(d);
	UNUSED(m);
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[w] != '\0')
	{
		if (ip(s[w]))
			b[w + o] = s[w];
		else
			o = o + aph(s[w], b, w + o);
		w++;
	}
	b[w + o] = '\0';
	return (write(1, b, w + o));
}
