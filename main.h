#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *s);
int check_format(va_list list, char s);
int _strlen(char *s);
#endif
