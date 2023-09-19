#include "main.h"

void fpf(char b[], int *bm);

/**
 * _printf - print number
 * @format: arguements
 * Return: printed
 */
int _printf(const char *format, ...)
{

	int w, y, yt, e, a, pd, m, bm;
	char b[1024];
	va_list k;

	y = 0;
	yt = 0;
	bm = 0;
	if (format == NULL)
		return (-1);
	va_start(k, format);
	for (w = 0; format && format[w] != '\0'; w++)
	{
		if (format[w] != '%')
		{
			b[bm++] = format[w];
			if (bm == 1024)
				fpf(b, &bm);
			yt = yt + 1;
		}
		else
		{
			fpf(b, &bm);
			e = gf(format, &w);
			a = gw(format, &w, k);
			pd = gp(format, &w, k);
			m = gsi(format, &w);
			++w;
			y = hp(format, &w, k, b, e, a, pd, m);
			if (y == -1)
				return (-1);
			yt = yt + y;
		}
	}
	fpf(b, &bm);
	va_end(k);
	return (yt);
}

/**
 * fpf - Prints
 * @b: Array
 * @bm: Index
 */

void fpf(char b[], int *bm)
{
	if (*bm > 0)
		write(1, &b[0], *bm);
	*bm = 0;
}
