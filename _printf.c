#include "main.h"

/**
 * _printf - prints string format to stdout
 * @format: string input
 * Return: length of format
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int counter = 0;
	char_option choice[] = {{'c', print_char_arg}, {'s', print_str_arg},
		{'d', print_int_arg}, {'i', print_int_arg},
		{'u', print_uint_arg}, {'x', print_hex_arg},
		{'X', print_hexcap_arg}, {'o', print_oct_arg},
		{'b', print_bin_arg}, {'p', print_address_arg},
		{'r', print_str_rev}, {'S', print_custom_str},
		{'\0', NULL},
	};

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	counter = print_option(format, choice, ap);
	va_end(ap);
	return (counter);
}

