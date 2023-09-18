#include "main.h"
/**
 * pr - prints a binary number
 * @args: number of arguments
 * @y: the printed character
 * Return: printed character
 */
int pr(va_list args, int y)
{
	char *s = va_arg(args, char *);
	int lenght;
	int w;

	lenght = 0;

	while (s[lenght])
	{
		lenght = lenght + 1;
	}

	for (w = lenght - 1; w >= 0; w--)
	{
		_putchar(s[w]);
		y++;
	}
	return (y);
}
