#include "main.h"

/**
 * _printf - print number
 * @format: arguements
 * Return: printed
 */

int _printf(const char *format, ...)
{
	int y;
	va_list args;

	y = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			y = opr(format, args, y);
			format++;
		}
		else
		{
			_putchar(*format);
			y = y + 1;
			format++;
		}
	}
	va_end(args);
	return (y);
}
