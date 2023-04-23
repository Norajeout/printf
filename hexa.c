#include "main.h"
/**
 * _hexa - prints the hexadicemal code of an integer
 * @n: parameter
 * @c: parameter
 * Return: number of char printed
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
