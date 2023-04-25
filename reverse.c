#include"main.h"
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * reverse - reverses string
 * @list: list of args
 * Return: length of string
 */
int reverse(va_list list)
{
	int i = 0, c = 0;
	char *s = va_arg(list, char *);

	if (!s)
		return (_putstr(NULL));
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		c += _putchar(s[i]);
		i--;
	}
	return (c);
}
