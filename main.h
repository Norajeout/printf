#ifndef MAIN_H
#define MAIN_H

#undef INT_MAX
#define INT_MAX 2147483647
#undef INT_MIN
#define INT_MIN (-INT_MAX - 1)
#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *s);
int check_format(va_list list, char s);
int _strlen(const char *s);
int _putnbr(int n);
int _putint(int n);
int _putunbr(unsigned int);
int _hexa(unsigned int n, char *c);
int _octal(unsigned int n);
int _putS(char *s);
int tobinary(unsigned int d);
#endif
