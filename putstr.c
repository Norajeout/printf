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
	char *str;

	str = (char *) malloc((_strlen(s)) * sizeof(char));
	if (str == NULL)
	{
		return (-1);
	}
	while (s[i])
	{
		_putchar(s[i]);
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	free(str);
	return (i);
}
