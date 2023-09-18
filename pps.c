#include "main.h"
/**
 * pps - prints a precent
 * @t: list of argument
 * @b: buffer array
 * @e: calc active flags
 * @a: get width
 * @pd: precsion specification
 * @m: size specifier
 * Return: num of char printed
 */
int pps(va_list t, char b[], int e, int pd, int m, int a)
{
	UNUSED(t);
	UNUSED(b);
	UNUSED(e);
	UNUSED(a);
	UNUSED(pd);
	UNUSED(m);
	return (write(1, "%%", 1));
}
