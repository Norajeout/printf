#include "main.h"
/**
 * _octal - print the octal code of an integer
 * @n: parameter
 * Return: number of char printed
 */
/** BY CHARIFA MASBAHI & NORA JEOUT*/
int _octal(unsigned int n)
{
	int o, c = 0;
	char ochars[] = {'0', '1', '2', '3', '4', '5', '6', '7'};

	while (n > 0)
	{
		o = n % 8;
		c += _putchar(ochars[o]);
		n = n / 8;
	}
	return (c);
}
