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
	int pd = ' ';

	UNUSED(pd);
	UNUSED(m);

	if (e & ez)
	       pd = '0';
	
	b[w++] = z;
	b[w] = '\0';

	if (m > 1)
	{
		b[bb_m - 1] = '\0';

		for (w = 0; w < m - 1; w++)
			b[bb_s - w - 2] = pd;
		if (e & e_m)
			return (write(1, &b[0], 1) +
					write(1, &b[bb_m - w - 1], a - 1));
	}
	return (write(1, &buffer[0], 1));
}
