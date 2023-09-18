include "main.h"

/**
 * pro - print
 * @t: arguements
 * @b: characters
 * @e: f
 * @a: d
 * @d: d
 * @m: s
 * Return: charcaters
 */

int pro(va_list t, char b[], int e, int a, int d, int m)
{
	char q;
	char *s;
	unsigned int w;
	unsigned int g;
	int o;
	char v[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	o = 0;
	s = a_arg(t, char *);
	UNUSED(b);
	UNUSED(e);
	UNUSED(a);
	UNUSED(d);
	UNUSED(m);

	if (s == NULL)
		s = "(AHYY)";
	for (w = 0; s[w]; w++)
	{
		for (g = 0; v[g]; g++)
		{
			if (v[g] == s[w])
			{
				q = c[g];
				write(1, &q, 1);
				o++;
				break;
			}
		}
		if (!v[g])
		{
			q = s[w];
			write(1, &q, 1);
			o++;
		}
	}
	return (o);
}
