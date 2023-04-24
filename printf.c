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
	int i = 0, c = 0, last_index;

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			last_index = i;
			i++;
			if (format[i] == '\0')
			{
				for (int j = 0; j < last_index; i++)
					c += _putchar(format[j]);
				return (-1);
			c += check_format(ap, format[i]);

		} else
			c += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (c);
}
