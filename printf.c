#include "main.h"

/* BY NORA JEOUT & CHARIFA MASBAHI*/
/**
 * _printf - function that produces output according to a format
 * @format: format
 * @... : parameters
 * Return: the number of characters printed
 */
int _printf(const char * const format, ...)
{
	int i = 0, c = 0;

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%' && format[i - 1] != '%')
			{
				i++;
				switch (format[i])
				{
					case 'c':
						c += _putchar(va_arg(list, int));
						break;
					case 's':
						c += _putstr(va_arg(list, char *));
						break;
					case '%':
						c += _putchar('%');
						break;
					default:
						continue;
				}
			}
			else
			{

				c +=  _putchar(format[i]);
			}
			i++;
		}
		return (c);
	}
	return (-1);

	va_end(list);
}
