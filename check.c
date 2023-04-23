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
	else if (s == 'd')
		return (_putnbr(va_arg(list, int)));
	else if (s == 'i')
		return (_putnbr(va_arg(list, int)));
	else if (s == 'u')
		return (_putunbr(va_arg(list, unsigned int)));
	else if (s == 'S')
		return (_putS(va_arg(list, char *S)));
	return (-1);
}
