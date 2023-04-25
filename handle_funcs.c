#include"main.h"
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * handle_nbr - prints number with flag
 * @num: parameter
 * @flag: flag
 * Return: count of chars printed
 */
int handle_nbr(int num, int flag)
{
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	} else if (flag && FLAG_PLUS)
	{
		count += _putchar('+');
	} else if (flag && FLAG_SPACE)
	{
		count += _putchar(' ');
	}

	count += _putint(num);
	return (count);
}
/**
 * handle_unbr - prints unsigned integer with flag
 * @num: parameter
 * @flag: flag
 * Return: count of chars printed
 */
int handle_unbr(unsigned int num, int flag)
{
	int count = 0;

	if (flag & FLAG_PLUS)
	{
		count += _putchar('+');
	} else if (flag & FLAG_SPACE)
	{
		count += _putchar(' ');
	}

	count += _putunbr(num);
	return (count);
}
/**
 * handle_hexa - convert num to hexadecimal with flag
 * @num: parameter
 * @flag: flag
 * @hex_digits: parameter
 * Return: count of chars printed
 */
int handle_hexa(unsigned int num, int flag, char *hex_digits)
{
	int count = 0;

	if (flag & FLAG_HASH)
	{
		count += _putchar('0');
		count += _putchar('x');
	}

	count += _hexa(num, hex_digits);
	return (count);
}
/**
 * handle_octal - convert num to octal with flag
 * @num: parameter
 * @flag: flag
 * Return: count of chars printed
 */
int handle_octal(unsigned int num, int flag)
{
	int count = 0;

	if (flag & FLAG_HASH)
	{
		count += _putchar('0');
	}

	count += _octal(num);
	return (count);
}
