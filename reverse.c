#include"main.h"
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * reverse - reverses string
 * @list: list of args
 * Return: length of string
 */
int reverse(va_list list)
{
	int i, c;
	char *p;


	p = va_arg(list, char *);
	c = _strlen(p);

	for (i = c - 1; i >= 0; i--)
		_putchar(p[i]);

	return (c);
}
