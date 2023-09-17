#include "main.h"

/**
 * pc - print
 * @args:arguements
 * @y: printed
 * Return: c
 */

int pc(va_list args, int y)
{
	int k;

	k = va_arg(args, int);
	_putchar(k);
	y = y + 1;
	return (y);
}
