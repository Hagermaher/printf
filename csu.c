#include "main.h"
/**
 * csu - kd
 * @n: dc
 * @m: f
 * Return: ds
 */

long int csu(unsigned long int n, int m)
{
	if (m == S_LONG)
		return (n);
	else if (m == S_SHORT)
		return ((unsigned short)n);
	return ((unsigned int)n);
}
