#include "main.h"
/**
 * hexa - convert decimal to hexadecimal
 * @n: parameter
 * @c: parameter
 * Return: count of chars printed
 */
/* BY CHARIFA MASBAHI & NORA JEOUT*/
int _hexa(unsigned int n, char *c)
{
	int cp = 0;
	if (n / 16)
	{
		cp += _hexa(n / 16, c);
		cp += _hexa(n % 16, c);
	} else
		cp += _putchar(c[n]);

	return (cp);
}
