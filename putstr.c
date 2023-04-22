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
	int c = 0;

	while (s[c])
	{
		write(1, &s[c], 1);
		c++;
	}
	return (0);
}
