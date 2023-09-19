
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
	int pd;

	cu = *w + 1;
	pd = -1;
	if (format[cu] != '.')
		return (pd);
	pd = 0;
	for (cu = cu + 1; format[cu] != '\0'; cu++)
	{
		if (id(format[cu]))
		{
			pd = pd * 10;
			pd = pd + format[cu] - '0';
		}
		else if (format[cu] == '*')
		{
			cu++;
			pd = va_arg(k, int);
			break;
		}
		else
			break;
	}
	*w = cu - 1;
	return (pd);
}
