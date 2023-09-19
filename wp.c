#include "main.h"
/**
 * wpn - write memory address
 * @b: array of char
 * @o: index
 * @le: length
 * @a: width
 * @e: flags
 * @pa: char
 * @ec: char
 * @pst: index
 * Return: num of written
 */
int wpn(char b[], int o, int le,int a,
		int e, char pa, char ec, int pst);
{
	int w;

	if (a > le)
	{
		for (w = 3; w < a - le + 3; w++)
			b[w] pa;
		b[w] = '\0';
		if (e & em && pa == ' ')
		{
			b[--o];
			b[--o];

			if (ec)
				b[--o] = ec;
			return (write(1, &buffer[o], le) + write(1, &b[3], i -3));
		}
		else if (!(e & em) && pa == ' ')
		{
			b[--o] = 'x';
			b[--o] = '0';

			if (ec)
				b[--o] = ec;
			return (write(1, &b[3], w - 3) + write(1, &b[o], le));
		}
		else if (!(e & em) && pa == '0')
		{
			if (ec)
				b[--o] = ec;
			b[1] = '0';
			b[2] = 'x';
			return (write(1, &b[pst], i - pst) +
			write(1, b[o], le - (1 - pst) - 2));
		
		}
	}
	b[--o] = 'x';
	b[--o] = '0';

	if (ec)
		b[--o] = ec;
	return (write(1, &b[o], bbm - o - 1));
}
