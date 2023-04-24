#include "main.h"
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * _putS - prints Ascii code of non printable characters
 * @s: parameter
 * Return: count of char printed
 */
int _putS(char *s)
{
	int count = 0, j;

	if (!s)
		return (_putstr(NULL));
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 32 || s[j] >= 127)
		{
			count += _putstr("\\x");
			count += _putchar((s[j] / 16) + (s[j] / 16 > 9 ? 'A' - 10 : '0'));
			count += _putchar((s[j] % 16) + (s[j] % 16 > 9 ? 'A' - 10 : '0'));
		}
		else
		{
			count += _putchar(s[j]);
		}
	}
	return (count);
}
