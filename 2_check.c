#include"main.h"
/*BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * check_format - check the format specifier
 * @list: parameters
 * @s: char
 * @flag: flag
 * Return: the number of charavters printed
 */
int check_format2(va_list list, char s, int flag)
{
	if (s == 'r')
		return(reverse(list));
	_putchar('%');
	_putchar(s);
	return (2);
}
