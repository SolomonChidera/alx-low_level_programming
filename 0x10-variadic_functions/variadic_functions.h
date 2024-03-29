#ifndef VARIADIC_FUN_H
#define VARIADIC_FUN_H

#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif
