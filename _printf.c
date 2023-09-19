#include "main.h"

/**
 * _printf - print number
 * @format: arguements
 * Return: printed
 */
int _printf(const char *format, ...)
{

	int w, y, yt, e, a, d, m, bm;
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
				pf(b, &bm);
			yt = yt + 1;
		}
		else
		{
			pf(b, &bm);
			e = gf(format, &w);
			a = gw(format, &w, k);
			d = gp(format, &w, k);
			m = gs(format, &w);
			++w;
			y = hp(format, &w, k, b, e, a, d, m);
			if (y == -1)
				return (-1);
			yt = yt + y;
		}
	}
	pf(b, &bm);
	va_end(k);
	return (yt);
}
