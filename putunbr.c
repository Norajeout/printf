#include"main.h"
/**
 * putunbr - print unsigned number
 * @n: unsigned int
 * Return : number of digit in number
 */
int _putunbr(unsigned int n)
{
	if (n / 10)
		_putunbr(n / 10);
	return (_putchar((n % 10) + '0'));
}
