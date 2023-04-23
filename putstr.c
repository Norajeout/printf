#include "main.h"
#include <unistd.h>
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * _putstr - prints a given string
 * @s: string
 * Return: length of string
 */
int _putstr(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		_putstr("(null)");
		return (6);
	}
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
