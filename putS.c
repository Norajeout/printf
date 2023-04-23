#include "main.h"
/**
 * _putS - print non printable characters
 * @S: string
 * Return: number of char printed
 */
int _putS(char *S)
{
	int i = 0, j, x;

	while (S[i])
	{
		if (*S < 32 || *S >= 127)
		{
			i += write(1, "\\x", 2);
			x = S[i];
			char hex[2];
			char *c = "0123456789ABCDEF";

			for (j = 2 - 1; j >= 0; j--)
			{
				hex[j] = c[x % 16];
				x /= 16;
			}

			for (j = 0; j < 2; j++)
			{
				j += write(1, &hex[j], 1);
			}
		} else if (*S == '\n')
			write(1, "\\x0A", 4);
		else
			write(1, &S[i], 1);
		i++;
	}
	return (i);
}
