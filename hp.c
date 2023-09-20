#include "main.h"
/**
 * hp - handle print argumrnt
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
	int w;
	int ul;
	int pch;
	xf f_t[] = {
		{'c', pc}, {'s', ps}, {'%', pps},
		{'i', pi}, {'d', pi}, {'b', pbi},
		{'u', pu}, {'o', poc}, {'x', phd},
		{'X', phu}, {'p', ppo}, {'S', pnp},
		{'r', prse}, {'R', pro}, {'\0', NULL}
	};

	pch = -1;
	ul = 0;
	for (w = 0; f_t[w].f != '\0'; w++)
		if (f[*o] == f_t[w].f)
			return (f_t[w].fx(k, b, e, a, pd, m));
	if (f_t[w].f == '\0')
	{
		if (f[*o] == '\0')
			return (-1);
		ul = ul + write(1, "%%", 1);
		if (f[*o - 1] == ' ')
			ul = ul + write(1, " ", 1);
		else if (a)
		{
			--(*o);
			while (f[*o] != ' ' && f[*o] != '%')
			{
				--(*o);
			}
			if (f[*o] == ' ')
			{
				--(*o);
			}
			return (1);
		}
		ul = ul + write(1, &f[*o], 1);
		return (ul);
	}
	return (pch);
}
