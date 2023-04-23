#include "main.h"
/* BY CHARIFA MASBAHI & NORA JEOUT*/

/**
 * check_format - check the format specifier
 * @list: parameters
 * @s: char
 * Return: the number of charavters printed
 */

int check_format(va_list list, char s)
{
	if (s == 'c')
		return (_putchar(va_arg(list, int)));
	else if (s == 's')
		return (_putstr(va_arg(list, char *)));
	else if (s == '%')
		return (_putchar('%'));
	else if (s == 'i' || s == 'd')
		return (_putint(va_arg(list, int)));
	else if (s == 'u')
		return (_putunbr(va_arg(list, unsigned int)));
	else if (s == 'x')
		return (_hexa(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (s == 'X')
		return (_hexa(va_arg(list, unsigned int), "0123456789ABCDEF"));
	else if (s == 'o')
		return (_octal(va_arg(list, unsigned int)));
	else
	{
		_putchar('%'), _putchar(s);
	}
	return (2);
}
