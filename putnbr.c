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

	if (n == INT_MIN)
	{
		c += _putchar('-');
		c += _putchar('2');
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
		c += _putchar(n % 10 + '0');
	}
	else
		c += _putchar(n + '0');
	return (c);

}

/**
 * putint - prints an integer
 * @n: input integer
 * Return: number of digit in an integer
 */
int _putint(int n)
{
	int c = 0;
	char *str;

	str = (char *) malloc(BUFFER_SIZE * sizeof(char));
	if (str == NULL)
		return (-1);
	c = _putnbr(n);
	free(str);
	return (c);
}
