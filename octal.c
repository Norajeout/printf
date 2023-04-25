#include "main.h"
/**
 * _octal - convert decimal to octal
 * @n: parameter
 * Return: count printed digits
 */
/*BY CHARIFA MASBAHI & NORA JEOUT*/
int _octal(unsigned int n)
{
	int c = 0;
	char *digit = "01234567";

	if (n / 8)
		c += _octal(n / 8);
	c += _putchar(digit[n % 8]);
	return (c);
}
