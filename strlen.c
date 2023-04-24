#include "main.h"
#include <string.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: a parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI & NORA JEOUT*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
