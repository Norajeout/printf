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
/**
 * rot_13 - to crypt rot_13
 * @s: string
 * Return: string
 */
int rot_13(char *s)
{
	int i = 0;
	int c = 0;

	if (!s)
		return (_putstr(NULL));
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			c += _putchar((((s[i] - 'a') + 13) % 26) + 'a');
		if (s[i] >= 'A' && s[i] <= 'Z')
			c += _putchar((((s[i] - 'A') + 13) % 26) + 'A');
		else
			c += _putchar(s[i]);
		i++;
	}
	return (c);
}
