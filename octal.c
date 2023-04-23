#include "main.h"
/**
 * _octal - convert decimal to octal
 * @n: parameter
 * Return: count printed digits
 */
/*BY CHARIFA MASBAHI & NORA JEOUT*/
int _octal(unsigned int n)
{
	int o, c = 0, i = 0;
	char ochars[] = {'0', '1', '2', '3', '4', '5', '6', '7'};
	int X[50];

	while (n > 0)
	{
		o = n % 8;
		X[i] = ochars[o];
		n = n / 8;
		i++;
	}
	X[i] = '\0';
	while (i > 0)
	{
		c += _putchar(X[i]);
		i--;
	}
	return (c);
}
