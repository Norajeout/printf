#ifndef MAIN_H
#define MAIN_H

#undef BUFFER_SIZE
#undef INT_MAX
#define INT_MAX 2147483647
#undef INT_MIN
#define INT_MIN (-INT_MAX - 1)
#undef BUFFER_SIZE
#define BUFFER_SIZE 1024

#define FLAG_PLUS 1
#define FLAG_SPACE 2
#define FLAG_HASH 4

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>


int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *s);
int check_format(va_list list, char s, int flag);
int _strlen(const char *s);
int _putnbr(int n);
int _putint(int n);
int _putunbr(unsigned int);
int _hexa(unsigned int n, char *c);
int _octal(unsigned int n);
int _putS(char *s);
int tobinary(unsigned int d);
int _printpointer(va_list arm);
int handle_nbr(int num, int flag);
int handle_unbr(unsigned int num, int flag);
int handle_hexa(unsigned int num, int flag, char *hex_digits);
int handle_octal(unsigned int num, int flag);
int check_format2(va_list list, char s, int flag);
int reverse(va_list list);
int check_flag(char s, char c);
int printrot13(va_list list);
int rot_13(char *s);
#endif
