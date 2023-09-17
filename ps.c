#include "main.h"
/**
 * ps - prints a string
 * @args: number of arguments
 * @y: printed character
 * Return: prints characters
 */

int ps(va_list args, int y)
{
	char *s = va_arg(args, char *);

		while (*s != '\0')
		{
			_putchar(*s);
			y++;
			s++;
		}
	return (y);
}
