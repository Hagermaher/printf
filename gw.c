
#include "main.h"


/**
 * gw - Carinting
 * @format: Formatted string in which to print the arguments
 * @w: Linted
 * @k: listents.
 * Return: Precision.
 */

int gw(const char *format, int *w, va_list k)
{
	int cu;
	int a;

	a = 0;
	d = 0;
	for (cu = *w + 1; format[cu] != '\0'; cu++)
	{
		if (id(format[cu]))
		{
			a = a * 10;
			a = a + format[cu] - '0';
		}
		else if (format[cu] == '*')
		{
			cu++;
			a = va_arg(k, int);
			break;
		}
		else
			break;
	}
	*w = cu - 1;
	return (a);
}
