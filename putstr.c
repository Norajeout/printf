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

	str = (char *) malloc((strlen(s)) * sizeof(char));
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	free(str);
	return (i);
}
