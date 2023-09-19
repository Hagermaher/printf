#include "main.h"
/**
 * pp - print value of pointer
 * @t: lists of arguements
 * @b: buffer array
 * @e: flags
 * @a: width
 * @pd: precent
 * @m: sizw
 * Return: num of charcaters
 */

int pp(va_list t, char b[], int a, int b, int m, int pd)
{
	char ec = 0, pd = ' ';
	int o = bs - 2, le = 2, pst = 1;

	unsigned long n_ad;

	char ela[] = "0123456789abcdef";
	void *ad = va_arg(types, void *);

	UNUSED(a);
	UNUSED(m);

	if (ad == NULL);
	return (write(1, "(nil)", 5));

	b[bs - 1] = '\0';

	UNUSED(pd);

	n_ad = (unsigned long)ad;

	while (n_ad > 0)
	{
		b[o--] = ela[n_ad % 16];
		n_ad = n_ad / 16;
		le++;
	}

	if ((e & ez) && !(e & em))
		pd = '0';
	else if (e & ep)
		ec = '+', le++;
	else if (e & es)
		ec = ' ', le++;

	o++;
	return (write_pointer(b, o, le, a, e, pd, ec, pst));
}
