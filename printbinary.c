#include "main.h"
/* BYYY NORAAAAAA JEOUT AND CHARIFA MASBAHI */
/**
 * print_binary - Prints an unsigned number
 * @types: List of arguments
 * @buffer: Buffer to get print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers characrets printed
 */
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	unsigned int d, o, i, result;
	unsigned int a[32];
	int c;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	d = va_arg(types, unsigned int);
	o = 2147483648; /* (2 ^ 31) */
	a[0] = d / o;
	for (i = 1; i < 32; i++)
	{
		o /= 2;
		a[i] = (d / o) % 2;
	}
	for (i = 0, result = 0, c = 0; i < 32; i++)
	{
		result += a[i];
		if (result || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			c++;
		}
	}
	return (c);
}
