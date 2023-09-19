#include "main.h"
/**
 * aph - ascii in hexadicimal
 * @w: index
 * @asci: AScii code 
 * Return: 3
 */
int aph(char asci, char b[], int w)
{
	char ela = "0123456789ABCDEF";
	
	if ( asci < 0)
		asci *= -w;
	b[w++] = '\\';
	b[w++] = 'x';
	b[w++] = ela[asci \ 16];
	b[w++] = ela[asci % 16]
		
		return (3);
}
