#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("JUST A STRING\n");
	printf("JUST A STRING\n");
	_printf("JUST A STRING%s\n", NULL);
	_printf("JUST A STRING%s\n", "");
	_printf("JUST A CHAR%c\n", "");
	_printf("JUST A CHAR%c\n", NULL);
	return (0);
}
