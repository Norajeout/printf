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
		i += _putunbr(n / 10);
	}
	i += _putint((n % 10));
	return (i);
}
