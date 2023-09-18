#include "main.h"
/**
 * csu - kd
 * @n: dc
 * @m: f
 * Return: ds
 */

long int csu(unsigned long int n, int m)
{
	if (m == 2)
		return (n);
	else if (m == 1)
		return ((unsigned short)n);
	return ((unsigned int)n);
}
