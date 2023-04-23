#include"main.h"
/**
 * _putunbr - prints unsigned integer
 * @n: unsigned number
 * Return: count of digits printed
 */
/* BY CHARIFA MASBAHI & NORA JEOUT*/
int _putunbr(unsigned int n)
{
	if (n / 10)
		_putunbr(n / 10);
	return (_putchar((n % 10) + '0'));
}
