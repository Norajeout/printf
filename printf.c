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
	int i = 0, c = 0, b = 0, flag = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			else if (format[i] == '+')
			{
				flag = 1;
				i++;
			}
			else if (format[i] == ' ')
			{
				flag = 2;
				i++;
			}
			else if (format[i] == '#')
			{
				flag = 4;
				i++;
			}
			b = check_format(ap, format[i], flag);
			if (b == -1)
				return (-1);
			c += b;
		} else
			c += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (c);
}
