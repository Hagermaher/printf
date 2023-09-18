#include "main.h"
/**
 * hp - print argumrnt
 * @f: format string
 * @k: list of argument to be print
 * @o: o
 * @b: buffer array
 * @e: calc flag
 * @a: width
 * @pd: presicion
 * @m: size
 * Return: 1 or 2
 */
int hp(const char *f, int *o, va_list k, char b[],
		int e, int a, int pd, int m)
{
	int w, ul = 0, pch = -1;
	xf f_t[] = {
		{'c', pc}, {'s', ps}, {'%', pps},
		{'i', pi}, {'d', pi}, {'b', pb},
		{'u', pu}, {'o', po}, {'x', phd},
		{'X', phu}, {'p', pp}, {'S', pnp},
		{'r', pr}, {'R', prs}, {'\0', NULL}
	};
	for (w = 0; f_t[w].f != '\0'; w++)
		if (fx[*o] == f_t[w].f)
			return (f_t[w].fx(k, b, e, a, pd, m));
	if (f_t[w].f == '\0')
	{
		if (f[*o] == '\0')
		return (-1);
		ul += write(1, "%%", 1);
		if (f[*o - 1] == ' ')
			ul += write(1, " ", 1);
		else if (a)
		{
			--(*o);
		while (f[*o] != ' ' && f[*o] != '%')
			--(*o);
			if (f[*o] == ' ')
				--(*o);
			return (1);
		}
		ul += write(1, &f[*o], 1);
		return (ul);
	}
	return (pch);
}
