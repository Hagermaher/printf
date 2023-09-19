#include "main.h"
/**
 * gf - calc active flags
 * @format: format string
 * @w: param
 * Return: flags
 */
int gf(const char *format, int *w)
{
	int g;
	int cu;
	int e;

	e = 0;

	const char ec[] = {'-', '+', '0', '#', ' ', '\0'};
	const char ear[] = {em, ep, ez, eh, es, 0};

	for (cu = *w + 1; format[cu] != '\0'; cu++)
	{
		for (g = 0; ec[g] != '\0'; g++)
			if (format[cu] == ec[g])
			{
				e |= ear[g];
				break;
			}
		if (ec[g] == 0)
			break;
	}
	*w = cu - 1;
	return (e);
}
