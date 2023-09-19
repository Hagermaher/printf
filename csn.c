#include "main.h"
/**
 * csn - cast number
 * @n: number
 * @m: size
 * Return: casted value
 */
long int csn(long int n, int m)
{
	if (m == 2)
		return (n);
	else if (m == 1)
		return ((short)n);

	return ((int)n);
}
