#include "main.h"
/* by nora jeout and charifa masbahi*/
/**
 * printf_hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int printf_hex_aux(long int num)
{
	long int i;
	long int *ar;
	long int c = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		c++;
	}
	c++;
	ar = malloc(c * sizeof(long int));

	for (i = 0; i < c; i++)
	{
		ar[i] = temp % 16;
		temp /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (ar[i] > 9)
			ar[i] = ar[i] + 39;
		_putchar(ar[i] + '0');
	}
	free(ar);
	return (c);
}
