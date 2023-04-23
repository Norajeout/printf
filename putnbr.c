#include"main.h"
/**
 * _putnbr - prints number
 * @n: number
 * Return: number of digits printed
 */
/* BY CHARIFA MASBAHI & NORA JEOUT*/
int _putnbr(int n)
{
	int c = 0;

	if (n < 0)
	{
		c += _putchar('-');
		if (n == -2147483648)
		{
			c += _putchar('2');
			n %= 1000000000;
		}
		n = -n;
	}
	if (n > 9)
	{
		c += _putnbr(n / 10);
		c += _putnbr(n % 10);
	}
	else
		c += _putchar(n + '0');
	return (c);

}
