#include "main.h"
/**
 * pi - prints integer number
 * @args: number of arguments
 * @y: the printed character
 * Return: printed character
 */
int pi(va_list args, int y)
{
	int n = va_arg(args, int);
	int ds;

	ds = 0;
	int t;

	t = n;
	int d;

	if (n < 0)
	{
		y = y + _putchar('-');
		n = -n;

		t = n;
	}
	do {
		ds = ds + 1;
		t = t / 10;
	} while (t != 0);

	while (ds > 0)
	{
		int power;

		power = 1;
		int w;

		for (w = 1; w < ds; w++)
		{
			power = power * 10;
		}
		d = n / power;
		y = y + _putchar(d + '0');
		n = n - d * power;
		ds--;
	}
	return (y);
}
