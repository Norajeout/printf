#include"main.h"
/*BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * check_format2 - check the format specifier
 * @list: parameters
 * @s: char
 * @flag: flag
 * Return: the number of charavters printed
 */
int check_format2(va_list list, char s, int flag)
{
	if (s == 'r' && !flag)
		return (reverse(list));
	else if (s == 'R' && !flag)
		return (printrot13(list));
	_putchar('%');
	_putchar(s);
	return (2);
}
