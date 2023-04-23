#include "main.h"

/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * _printf - function that produces output according to a format
 * @format: format
 * @... : parameters
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, c = 0;

	if (!format)
	{
		return (-1);
	}
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			c += check_format(ap, format[i]);
		} else
			c += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (c);
}
