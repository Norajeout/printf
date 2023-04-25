#include "main.h"
/* by nora jeout and charifa masbahi*/
/**
* tobinary - print the binary of an unsigned int
*@d: unsigned integer
*Return: number of characters printed
*/

int tobinary(unsigned int d)
{
	int cmp = 0;

	if (d / 2)
	cmp += tobinary(d / 2);
	cmp += _putchar(d % 2 + '0');

	return (cmp);
}
