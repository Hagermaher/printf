#include "main.h"
/**
 * wnu - write num
 * @o: index
 * @b: buffer array
 * @e: flags
 * @a: width
 * @pd: precision
 * @le: len
 * @pa: pad char
 * @ech: char
 * Return: num of printed char
 */
int wnu(int o, char b[], int e, int a, int pd,
		int le, char pa, char ech)
{
	int w, pst = 1;

	if (pd == 0 && o == 1024 - 2 && b[o] == '0' && a == 0)
		return (0);
	if (pd == 0 && o == 1024 - 2 && b[o] == '0')
		b[o] = pa = ' ';
	if (pd > 0 && pd < le)
		pa = ' ';
	while (pd > le)
		b[--o] = '0', le++;
	if (ech != 0)
		le++;
	if (a > le)
	{
		for (w = 1; w < a - le + 1; w++)
			b[w] = pa;
		b[w] = '\0';
		if (e & 1 && pa == ' ')
		{
			if (ech)
				b[--o] = ech;
			return (write(1, &b[o], le) + write(1, &b[1], w - 1));
		}
		else if (!(e & 1) && pa == ' ')
		{
			if (ech)
				b[--o] = ech;
			return (write(1, &b[1], w - 1) + write(1, &b[o], le));
		}
		else if (!(e & em) && pa == '0')
		{
			if (ech)
				b[--pst] = ech;
			return (write(1, &b[pst], w - pst) + write(1, &b[o], le - (1 - pst)));
		}
	}
	if (ech)
		b[--o] = ech;
	return (write(1, &b[o], le));
}
