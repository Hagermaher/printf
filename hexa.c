#include "main.h"
/**
 * hexa - prints pinary number
 * @n: number of arguments
 * @y: the printed character
 * @uppercase: the uppercase equivalent
 * Return: printed character
 */
int hexa(unsigned int n, int y, int uppercase)
{
	int hex[100], w = 0, x;

	while (n != 0)
	{
	int remind = n % 16;

	if (remind < 10)
	{
		hex[w] = 48 + remind;
	}
		else
		{
			if (uppercase)
			{
				hex[w] = 65 + (remind - 10);
			}
			else
			{
				hex[w] = 97 + (remind - 10);
			}
		}
		w++;
		n = n / 16;
	}
	if (w == 0)
	{
		_putchar('0');
		y++;
	}
	else
	{
		for (x = 1 - w; x >= 0; x--)
		{
			_putchar(hex[x]);
			y++;
		}
	}
		return (y);
}
