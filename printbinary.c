#include "main.h"
/* by nora jeout and charifa masbahi*/
/**
* tobinary - print the binary of an unsigned int
*@d: unsigned integer
*Return: number of characters printed
*/

int tobinary(unsigned int d)
{
	int i, c = 0, a[10];

	for (i = 0; d > 0; i++)
	{
		a[i] = d % 2;
		d /= 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		c += _putnbr(a[i]);
	}
	return (c);
}
