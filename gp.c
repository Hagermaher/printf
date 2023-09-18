
#include "main.h"


/**
 * gp - Carinting
 * @format: Formatted string in which to print the arguments
 * @w: Linted
 * @k: listents.
 * Return: Precision.
 */

int gp(const char *format, int *w, va_list k)
{
	int cu;
	int d;

	cu = *w + 1;
	d = -1;
	if (format[cu] != '.')
		return (d);
	d = 0;
	for (cu += 1; format[cu] != '\0'; cu++)
	{
		if (id(format[cu]))
		{
			d = d * 10;
			d = d + format[cu] - '0';
		}
		else if (format[cu] == '*')
		{
			cu++;
			d = va_arg(k, int);
			break;
		}
		else
			break;
	}
	*w = cu - 1;
	return (d);
}
