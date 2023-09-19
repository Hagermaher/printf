#include "main.h"

/**
 * wu - print
 * @in: arguements
 * @o: d
 * @b: characters
 * @e: f
 * @a: d
 * @pd: d
 * @m: s
 * Return: charcaters
 */

int wu(int in, int o, char b[], int e, int a, int pd, int m)
{
	int h;
	int w;
	char z;

	h = 1024 - o - 1;
	z = ' ';
	w = 0;
	UNUSED(m);
	UNUSED(in);
	if (pd == 0 && o == 1024 - 2 && b[o] == 48)
		return (0);
	if (pd > 0 && pd < h)
		z = ' ';
	while (pd > h)
	{
		b[--o] = 48;
		h++;
	}
	if ((e & ez) && !(e & em))
		z = 48;
	if (a > h)
	{
		for (w = 0; w < a - h; w++)
			b[w] = z;
		b[w] = '\0';
		if (e & em)
			return (write(1, &b[o], h) + write(1, &b[0], w));
		else
			return (write(1, &b[0], w) + write(1, &b[o], h));
	}
	return (write(1, &b[o], h));
}
