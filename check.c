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
		return (_putstr(va_arg(list, char *) ? va_arg(list, char *) : "(null)"));
	else if (s == '%')
		return (_putchar('%'));
	return (0);
}
