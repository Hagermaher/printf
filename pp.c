#include "main.h"
/**
 * ppo - print value of pointer
 * @t: lists of arguements
 * @b: buffer array
 * @e: flags
 * @a: width
 * @pd: precent
 * @m: sizw
 * Return: num of charcaters
 */

int ppo(va_list t, char b[], int e, int a, int m, int pd)
{
	char ec = 0, pa = ' ';
	int o = 1024 - 2, le = 2, pst = 1;

	unsigned long n_ad;

	char ela[] = "0123456789abcdef";
	void *ad = va_arg(t, void *);

	UNUSED(a);
	UNUSED(m);

	if (ad == NULL)
		return (write(1, "(nil)", 5));

	b[1024 - 1] = '\0';

	UNUSED(pa);

	n_ad = (unsigned long)ad;

	while (n_ad > 0)
	{
		b[o--] = ela[n_ad % 16];
		n_ad = n_ad / 16;
		le++;
	}

	if ((e & ez) && !(e & em))
		pa = '0';
	else if (e & ep)
		ec = '+', le++;
	else if (e & es)
		ec = ' ', le++;

	o++;
	return (wpn(b, o, le, a, e, pa, ec, pst));
}
