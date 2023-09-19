#include "main.h"
/**
 * phu - print hexa
 * @t: list of arg
 * @b: buffer
 * @e: calc flags
 * @a: width
 * @pd: precision
 * @m: size
 * Return: num of char
 */
int hux(va_list t, char b[], int a, int m, int pd, int e)
{
	return (ph(t, "0123456789ABCDEF", b, e, 'X', a, pd, m));
}
