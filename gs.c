#include "main.h"
/**
 * gs - calc size
 * @format: formated string
 * @w: list of argument
 * Return: precision
 */

int gs(const char *format, int *w)
{
	int cu = *w + 1;
	int m = 0;

	if (format[cu] == 'l')
		m = ml;
	else if (format[cu] == 'h')
		m = ms;

	if (m == 0)
		*w = cu - 1;
	else
		*w = cu;
	return (m);
}
