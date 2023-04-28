#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format BY CHARIFA MASBAHI & NORA JEOUT
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, c = 0, b = 0, flag = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				c += _putchar('%');
				break;
			}
			flag = check_flag(format[i], format[i + 1]);
			if (flag != 0 && flag < 4)
				i++;
			else if (flag == 5 || flag == 6)
				i += 2;
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
/**
 * check_flag - checks the flag
 * @s: parameter
 * @c: parameter
 * Return: the value of flag
 */
int check_flag(char s, char c)
{
	if (s == ' ' && c == '+')
	{
		return (5);
	}
	else if (s == '+' && c == ' ')
	{
		return (6);
	}
	else if (s == '+')
	{
		return (1);
	} else if (s == ' ')
	{
		return (2);
	} else if (s == '#')
	{
		return (4);
	}
	return (0);
}
