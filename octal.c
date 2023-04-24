#include "main.h"
/**
 * _octal - convert decimal to octal
 * @n: parameter
 * Return: count printed digits
 */
/*BY CHARIFA MASBAHI & NORA JEOUT*/
int _octal(unsigned int n)
{
	const char *digits = "01234567";
	char X[50];
	char *p = X + sizeof(X) - 1;
	int c = 0;

	if (!p)
		return (_putstr(NULL));
	*p = '\0';
	do {
		*--p = digits[n % 8];
		c++;
		n /= 8;
	} while (n != 0);
	c += _putstr(p);

	return (c);
}
