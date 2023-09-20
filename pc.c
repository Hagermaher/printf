#include "main.h"

/**
 * pc - printchar
 * @t: list of argu
 * @b: buffer array to argument
 * @e: calc active flag
 * @a: width
 * @pd: precision speification
 * @m: size specifief
 * Return: num oc printed char
 */

int pc(va_list t, char b[], int e, int a, int pd, int m)
{
	char z;

	z = va_arg(t, int);
	return (hwc(z, b, e, a, pd, m));
}
