#include "main.h"

/**
 * pb - prints
 * @n: arguements
 * @y: characters
 * Return: charcaters
 */

int pb(unsigned int n, int y)
{
	int bi[32] = {0};
	int w;

	w = 0;

	if (n == 0)
	{
		_putchar('0');
		y = y + 1;
		return (y);
	}

	while (n > 0)
	{
		bi[w] = n % 2;
		n = n / 2;
		w = w + 1;
	}

	while (w > 0)
	{
		w = w - 1;
		_putchar('0' + bi[w]);
		y = y + 1;
	}

	return (y);
}
