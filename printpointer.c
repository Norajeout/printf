#include "main.h"
/* by NORA JEOUT AND CHARIFA MASBA7I */
/**
 * _printpointer - prints an hexgecimal number.
 * @arm: arguments.
 * Return: counter.
 */
int _printpointer(va_list arm)
{
	void *p;
	char *s = "(nil)";
	long int n;
	int c;
	int i;

	p = va_arg(arm, void*);
	if (!p)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	n = (long int)p;
	n = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	c = printf_hex_aux(n);
	return (c + 2);
}
