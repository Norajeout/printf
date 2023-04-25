#include "main.h"
/* by NORA JEOUT AND CHARIFA MASBAHI */
/**
 * _printpointer - prints an hexgecimal number.
 * @arm: arguments.
 * Return: counter.
 */
int _printpointer(va_list arm)
{
	void *ptr = va_arg(arm, void *);
	uintptr_t p = (uintptr_t)ptr;
	int c = 0;
	char hex_buffer[16];
	int x = 0;
	int i;
	char *s;

	if (!ptr)
	{
		s = "(nil)";
		for (i = 0; s[i] != '\0'; i++)
		{
			c += _putchar(s[i]);
		}
		return (c);
	}

	c += _putchar('0');
	c += _putchar('x');

	while (p > 0)
	{
		int rem = p % 16;

		if (rem < 10)
			hex_buffer[x++] = '0' + rem;
		else
			hex_buffer[x++] = 'a' + (rem - 10);

		p /= 16;
	}
	for (i = x - 1; i >= 0; i--)
	{
		c += _putchar(hex_buffer[i]);
	}

	return (c);
}
