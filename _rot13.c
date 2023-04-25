#include "main.h"
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * printrot13 - function of rot_13
 * @list: list o args
 * Return: len of string
 */
int printrot13(va_list list)
{
	char *s;
	int i = 0, j = 0;
	char r[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char R[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(list, char *);

	while (s[j])
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			while (i <= 52)
			{
				if (s[j] == r[i])
					_putchar(R[i]);
				i++;
			}
		}
		j++;
	}
	return (j);
}
