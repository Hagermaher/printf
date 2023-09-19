#include "main.h"

/**
 * fpf - Prints
 * @b: Array
 * @bm: Index
 */

void fpf(char b[], int *bm)
{
	if (*bm > 0)
		write(1, &b[0], *bm);
	*bm = 0;
}
