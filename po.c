#include "main.h"

/**
 * po - prints
 * @n: arguements
 * @y: characters
 * Return: charcaters
 */

int po(unsigned int n, int y)
{
	int c[100];
	int w;
	int b;

	w = 0;

	while (n != 0)
	{
		int rr;

		rr = n % 8;

		c[w] = 48 + rr;
		w = w + 1;
		n = n / 8;
	}

	if (w == 0)
	{
		_putchar('0');
		y = y + 1;
	}
	else
	{
		for (b = w - 1; b >= 0; b--)
		{
			_putchar(c[b]);
			y = y + 1;
		}
	}
	return (y);
}
