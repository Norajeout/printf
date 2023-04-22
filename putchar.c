#include"main.h"
#include<unistd.h>
/* BY NORA JEOUT & CHARIFA MASBAHI*/
/**
 * _putchar - print a given char
 * @c: char
 * Return: len char 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
