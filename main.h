#ifndef PRINT_FUNCTIONS_H
#define PRINT_FUNCTIONS_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int print_str(char *str);
int print_int(int num);
int print_int_arg(va_list ap);

#endif
