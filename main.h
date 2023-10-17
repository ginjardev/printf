#ifndef PRINT_FUNCTIONS_H
#define PRINT_FUNCTIONS_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int print_str(char *str);
int print_int(int num);
int print_bin(unsigned int num);
int print_hex(unsigned int num);
int print_hex_cap(unsigned int num);
int print_oct(unsigned int num);
int print_unsigned_int(unsigned int);
int print_int_arg(va_list ap);
int print_uint_arg(va_list ap);
int print_str_arg(va_list ap);
int print_char_arg(va_list ap);
int print_hex_arg(va_list ap);
int print_bin_arg(va_list ap);
int print_oct_arg(va_list ap);
int print_hexcap_arg(va_list ap);
int print_option(char c, va_list ap);

/**
 * struct option - option structure
 * @character: char format specifier
 * @print_arg: function pointer
 */
typedef struct option
{
	char character;
	int (*print_arg)(va_list ap);
} char_option;


#endif
