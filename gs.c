#include "main.h"
/**
 * gsi - calc size
 * @format: formated string
 * @w: list of argument
 * Return: precision
 */

int gsi(const char *format, int *w)
{
	int cu;
	int m;

	cu = *w + 1;
	m = 0;

	if (format[cu] == 'l')
		m = 2;
	else if (format[cu] == 'h')
		m = 1;

	if (m == 0)
		*w = cu - 1;
	else
		*w = cu;
	return (m);
}
