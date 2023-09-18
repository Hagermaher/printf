#include "main.h"
/**
 * opr - selects the appropriate specifiers
 * @args: number of arguments
 * @y: the printed char
 * @format: the format specifier
 * Return: the printed char
 */
int opr(const char *format, va_list args, int y)
{
	switch (*format)
	{
	case 'd':
	case 'i':
		y = pi(args, y);
		break;
	case 'c':
		y = pc(args, y);
		break;
	case 's':
		y = ps(args, y);
		break;
	case '%':
		_putchar('%');
		y = y + 1;
		break;
	case 'b':
		y = pb(va_arg(args, unsigned int), y);
		break;
	case 'x':
	case 'X':
		y = hexa(va_arg(args, unsigned int), y, (*format == 'X') ? 1 : 0);
		break;
	case 'o':
		y = po(va_arg(args, unsigned int), y);
		break;
	case 'u':
		y =  pu(va_arg(args, unsigned int), y);
		break;
	case 'r':
		y = pr(args, y);
		break;
	case 'p':
		y = pp(args, y);
		break;
	default:
		break;
	}
	return (y);
}
