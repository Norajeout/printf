#include "main.h"
/* by nora jeout and charifa masbahi*/
/**
* tobinary - print the binary of an unsigned int
*@d: unsigned integer
*Return: number of characters printed
*/

long tobinary(unsigned int d)
{
	long binary = 0;
	int rem, i = 1;
	long b = 0;

	while (d != 0)
	{
	rem = d % 2;
	d /= 2;
	binary += rem * i;
	i = 10;
	}

	while (binary != 0)
	{
	b = b * 10 + (binary % 10);
	binary /= 10;
	}
	while (b != 0)
	{
	_putchar(b % 10 + '0');
	b /= 10;
	}
	return (binary);
}
