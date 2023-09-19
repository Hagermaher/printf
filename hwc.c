#include "main.h"
/**
 * hwc - prints a string
 * @z: char type
 * @b: buffer array
 * @e: flags
 * @m: sizw
 * @pd: precisiob
 * @a: width
 * Return: num of char
 */
int hwc(char z, char b[], int e, int a, int pd, int m)
{
	int w = 0;
	int pa = ' ';

	UNUSED(pd);
	UNUSED(m);

	if (e & ez)
		pa = '0';
	b[w++] = z;
	b[w] = '\0';

	if (a > 1)
	{
		b[1024 - 1] = '\0';

		for (w = 0; w < a - 1; w++)
			b[1024 - w - 2] = pa;
		if (e & em)
			return (write(1, &b[0], 1) + write(1, &b[1024 - w - 1], a - 1));
		else
			return (write(1, &b[1024 - w - 1], a - 1) + write(1, &b[0], 1));
	}
	return (write(1, &b[0], 1));
}
