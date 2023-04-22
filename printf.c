#include "main.h"
/* BY NORA JEOUT & CHARIFA MASBAHI*/
/**
 * _printf - function that produces output according to a format
 * @format: format
 * @...: parameters
 * Return: the number of charavters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, cha = 0;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			cha += check_format(ap, format[i]);
			cha += _putchar('%');
		} else
		{
			cha += _putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (cha);
}
