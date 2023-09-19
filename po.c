#include "main.h"
/**
 * po - print octal
 * @t: list of argument
 * @b : buffer array
 * @e: calc flags
 * @a: width
 * @m: sizw
 * Return : num of char
 */

int po(va_list t, char b[], int e, int a, int m, int pd)
{
	int w = bs - 2;
	unsigned long int n = va_arg(t, unsigned long int);
	unsigned long int in = n;

	UNUSED(a);

	n = csu(n, m);

	if (n == 0)
		b[w--] = '0';
	
	b[bs - 1] = '\0';
	while (n > 0)
	{
		b[w--] = (n % 8) + '0';
		n = n / 8;
	}
	if (e & eh && in != 0)
		b[w--] = '0';
	w++;
	return (write_unsignd(0, w, b, e, a, pd, m));
}	
