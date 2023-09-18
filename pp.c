#include "main.h"

#define mhd 16

/**
 * pp - prints
 * @args: arguements
 * @y: the characters
 * Return: charcaters
 */

int pp(va_list args, int y)
{
	void *p = va_arg(args, void*);
	unsigned long n = (unsigned long) p;
	int r;
	int w;
	unsigned long m;
	char hd[mhd] = "0123456789abcdef";
	char h[mhd];

	m = n;
	r = 0;

	while (m != 0)
	{
		r = r + 1;
		m = m / 16;
	}

	y += _putchar('0');
	y += _putchar('x');

	if (n == 0)
	{
		y += _putchar('0');
	}
	else
	{
		for (w = r - 1; w >= 0; w--)
		{
			int r = n % 16;

			h[w] = hd[r];
			n = n / 16;
		}
		for (w = 0; w < r; w++)
		{
			y += _putchar(h[w]);
		}
	}
	return (y);
}
