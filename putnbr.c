#include"main.h"
/**
 * _putnbr - prints number
 * @n: number
 * Return: returns number of digit
 */
int _putnbr(int n)
{
	int c = 0;

	if (n == INT_MIN)
	{
		c += _putchar('-');
		_putchar('2');
		c += _putnbr(147483648);
	}
	else if (n < 0)
	{
		c += _putchar('-');
		n = -n;
		c += _putnbr(n);
	}
	else if (n > 9)
	{
		c += _putnbr(n / 10);
		c += _putnbr(n % 10);
	}
	else
		c += _putchar(n + '0');
	return (c);

}
