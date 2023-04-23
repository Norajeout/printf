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

	while (s[i])
	{

		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
