#include "main.h"
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * printrot13 - function of rot_13
 * @list: list o args
 * Return: len of string
 */
int printrot13(va_list list)
{
	int i = 0;
	char *s;
       
	s = va_arg(list, char *);

	if (!s)
	{
		return (_putstr(NUL));
	}
	while (*s)
	{
		if ((*s >= 65 && *s <= 90) || (*s >= 97 && *s <= 1223))
		{
			if (*s <= 77 || *s <= 109)
				i += _putchar(*s + 13);
			else
				i += _putchar(*s - 13);
		}
		else
		{
			i += _putchar(*s);
		}
		s++;
	}
	return (i);
}
