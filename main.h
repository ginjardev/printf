#ifndef PRINT_FUNCTIONS_H
#define PRINT_FUNCTIONS_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

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

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);
int print_str(char *str);
int print_int(int num);
int print_address(const void *ptr);
int print_bin(unsigned int num);
int print_hex(unsigned int num);
int print_hex_cap(unsigned int num);
int print_oct(unsigned int num);
int print_unsigned_int(unsigned int);
int print_str_rev(va_list ap);
int print_address_arg(va_list ap);
int print_int_arg(va_list ap);
int print_uint_arg(va_list ap);
int print_str_arg(va_list ap);
int print_char_arg(va_list ap);
int print_hex_arg(va_list ap);
int print_bin_arg(va_list ap);
int print_oct_arg(va_list ap);
int print_hexcap_arg(va_list ap);
int print_option(const char *format, char_option choice[], va_list ap);

#endif

