#include "main.h"
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * check_format - check the format specifier
 * @list: parameters
 * @s: char
 * @flag: flag
 * Return: the number of charavters printed
 */
int check_format(va_list list, char s, int flag)
{
	if (s == 'c')
		return (_putchar(va_arg(list, int)));
	else if (s == 's')
		return (_putstr(va_arg(list, char *)));
	else if (s == '%')
		return (_putchar('%'));
	else if (s == 'i' || s == 'd')
	{
		if (flag == 1 || flag == 2 || flag == 5 || flag == 6)
			return (handle_nbr(va_arg(list, int), flag));
		return (_putint(va_arg(list, int)));
	} else if (s == 'u')
	{
		if (flag == 1 || flag == 2)
			return (handle_unbr(va_arg(list, unsigned int), flag));
		return (_putunbr(va_arg(list, unsigned int)));
	} else if (s == 'x')
	{
		if (flag == 4)
			return (handle_hexa(va_arg(list, unsigned int), flag, "0123456789abcdef"));
		return (_hexa(va_arg(list, unsigned int), "0123456789abcdef"));
	} else if (s == 'X')
	{
		if (flag == 4)
			return (handle_hexa(va_arg(list, unsigned int), flag, "0123456789ABCDEF"));
		return (_hexa(va_arg(list, unsigned int), "0123456789ABCDEF"));
	} else if (s == 'o')
	{
		if (flag == 4)
			return (handle_octal(va_arg(list, unsigned int), flag));
		return (_octal(va_arg(list, unsigned int)));
	} else if (s == 'S')
		return (_putS(va_arg(list, char *)));
	else if (s == 'b')
		return (tobinary(va_arg(list, unsigned int)));
	else if (s == 'p')
		return (_printpointer(list));
	return (check_format2(list, s, flag));

}
