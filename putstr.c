#include "main.h"
#include <unistd.h>
/* BY CHARIFA MASBAHI & NORA JEOUT*/
/**
 * _putstr - prints a given string
 * @s: string
 * Return: length of string
 */
/*int _putstr(char *s)
  {
  int c = 0;

  if (s == NULL)
  {
  printf("(NULL)");
  return (-1);
  }
  while (s[c])
  {
  write(1, &s[c], 1);
  c++;
  }
  return (c);
  }*/
int _putstr(char *s)
{
	int i = 0;
	char *str;
	str = (char *) malloc((strlen(s)) * sizeof(char));
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	free(str);
	return (i);
}
