#include"main.h"
/**
 * _putunbr - prints unsigned integer
 * @n: unsigned number
 * Return: count of digits printed
 */
/* BY CHARIFA MASBAHI & NORA JEOUT*/
int _putunbr(unsigned int n)
{
	int i = 0;

	if (n / 10)
	{
		_putunbr(n / 10);
		i++;
	}
	i += _putchar((n % 10) + '0');
	return (i);
}
