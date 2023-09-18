#include "main.h"

/**
 * pu - print
 * @n: arguements
 * @y: characters
 * Return: charcaters
 */

int pu(unsigned int n, int y)
{
	int r;
	unsigned int m;

	m = n;
	r = 0;

	do {
		r = r + 1;
		m /= 10;
	} while (m != 0);

	if (n == 0)
	{
		_putchar('0');
		y = y + 1;
	}
	else
	{
		char us[11];
		int w = 0;

		while (n != 0)
		{
			us[w] = (n % 10) + '0';
			n = n / 10;
			w++;
		}
		for (w = r - 1; w >= 0; w--)
		{
			_putchar(us[w]);
			y = y + 1;
		}
	}
	return (y);
}
